#include <stdio.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <assert.h>

#define SHMSIZE 500

pid_t myfork(unsigned char* p, unsigned char d)
{
	pid_t pid = fork();
	if ( pid==0 )
	{
		int i;
		for(;;)
			for( i=0 ; i<SHMSIZE; ++i )
				p[i] = d;
		
		assert(0);
	}
	return pid;
}

int main(int argc, char** argv)
{
	int segment;
	unsigned char *p;
	pid_t c1,c2,c3,c4,c5;
	int j;
	int status;

	segment = shmget(IPC_PRIVATE, SHMSIZE, S_IRUSR|S_IWUSR);   // $B%;%0%a%s%H(BID$B$r<hF@$7$^$9(B
	p = (unsigned char*)shmat (segment, NULL, 0);              // $B6&M-%a%b%j$X%"%?%C%A(B

	c1 = myfork(p,0x00);
	c2 = myfork(p,0xAA);
	c3 = myfork(p,0xBB);
	c4 = myfork(p,0xCC);
	c5 = myfork(p,0xDD);

	for ( j=0 ; j < 10000 ; ++j )
	{
		int k;
		unsigned char d;
		d = p[0];
		for ( k=0 ; k < SHMSIZE; ++k  )
		{
			if( d != p[k] )
			{
				printf("error: p[0]!=p[%d] (0x%02X!=0x%02X)\n", k, d, p[k]);
				break;
			}
		}
		fflush(stdout);  // $B%f!<%6!<6u4V$K%P%C%U%!%j%s%0$5$l$F$$$kA4$F$N%G!<%?$r;XDj$5$l$?=PNO$K=q$-=P$7$^$9!#(B
	}

	kill(c1, SIGTERM);
	kill(c2, SIGTERM);
	kill(c3, SIGTERM);
	kill(c4, SIGTERM);
	kill(c5, SIGTERM);

	wait(&status);
	wait(&status);
	wait(&status);
	wait(&status);
	wait(&status);
	
	shmctl (segment, IPC_RMID, NULL);   // $B6&M-%a%b%j!&%;%0%a%s%H$rGK4~$7$^$9!#(B
	return 0;
}

