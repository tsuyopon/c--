/*
 * $B;q8;$N;HMQNL$r<hF@$9$k%W%m%0%i%`(B
 *  REF: http://linuxjm.sourceforge.jp/html/LDP_man-pages/man2/getrusage.2.html
 */

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>

static void
dummy(void)
{
    int cnt = 0;
    int sum = 1;

    for(cnt = 0; cnt <= 1000000; cnt++ ){
        sum *= cnt;
    }
}

int
main(void)
{
    struct rusage usage;
    int rc = 0;
    dummy();
	
	/* getrusage$B$NBh#10z?t$K$O2<5-#3$D$,;XDj$G$-$k!#(Busage$B$O%]%$%s%?7PM3$G>pJs$r<hF@$9$k(B
	 *   RUSAGE_SELF:     $B8F$S=P$7$?%W%m%;%9$N;q8;;HMQNL!"(B $B$=$N%W%m%;%9Fb$NA4%9%l%C%I$,;HMQ$7$F$$$k;q8;$N9g7W$rJV$9!#(B
	 *   RUSAGE_CHILDREN: $B8F$S=P$7$?%W%m%;%9$N;R%W%m%;%9$N$&$A!"(B $B=*N;$7$FBT$A>uBV$K$"$kA4%W%m%;%9$,;HMQ$7$F$$$k;q8;;HMQNL$NE}7W$rJV$9!#(B
	 *   RUSAGE_THREAD:   $B8F$S=P$7$?%9%l%C%I$K4X$9$k;q8;;HMQNL$NE}7W$rJV$9!#(B(Linux 2.6.26 $B0J9_(B)
	 */
    rc = getrusage(RUSAGE_SELF, &usage);
    if(rc < 0){
        printf("Error: getrusage(%d) %s\n", errno, strerror(errno));
        return(-1);
    }

    printf("usr time    = %ld.%d\n", usage.ru_utime.tv_sec, usage.ru_utime.tv_usec);  // $B;HMQ$5$l$?%f!<%6(BCPU$B;~4V(B
    printf("sys time    = %ld.%d\n", usage.ru_stime.tv_sec, usage.ru_stime.tv_usec);  // $B;HMQ$5$l$?%7%9%F%`(BCPU$B;~4V(B

    printf("ru_maxrss   = %ld\n", usage.ru_maxrss);                                   // RAM$B>e$KB8:_$9$k2>A[%Z!<%8$N%5%$%:(B(resident set size)$B$N:GBgCM(B
    printf("ru_ixrss    = %ld\n", usage.ru_ixrss);                                    // $B6&M-%a%b%j$N9g7W%5%$%:(B
    printf("ru_idrss    = %ld\n", usage.ru_idrss);                                    // $BHs6&M-%G!<%?$N9g7W%5%$%:(B
    printf("ru_isrss    = %ld\n", usage.ru_isrss);                                    // $BHs6&M-%9%?%C%/$N9g7W%5%$%:(B

    printf("ru_minflt   = %ld\n", usage.ru_minflt);                                    // $B%Z!<%8$N:FMxMQ(B ($B%=%U%H%Z!<%8%U%)%k%H(B)
    printf("ru_majflt   = %ld\n", usage.ru_majflt);                                   // $B%Z!<%8%U%)!<%k%H(B ($B%O!<%I%Z!<%8%U%)%k%H(B)
    printf("ru_nswap    = %ld\n", usage.ru_nswap);                                    // $B%9%o%C%W(B

    printf("ru_inblock  = %ld\n", usage.ru_inblock);                                  // $B%V%m%C%/F~NOA`:n(B
    printf("ru_oublock  = %ld\n", usage.ru_oublock);                                  // $B%V%m%C%/=PNOA`:n(B

    printf("ru_msgsnd   = %ld\n", usage.ru_msgsnd);                                   // $BAw?.$5$l$?(B IPC $B%a%C%;!<%8(B
    printf("ru_msgrcv   = %ld\n", usage.ru_msgrcv);                                   // $B<u?.$5$l$?(B IPC $B%a%C%;!<%8(B
    printf("ru_nsignals = %ld\n", usage.ru_nsignals);                                 // $B<u?.$5$l$?%7%0%J%k(B

    printf("ru_nvcsw    = %ld\n", usage.ru_nvcsw);                                    // $B0U?^$7$?%3%s%F%-%9%H@Z$jBX$((B
    printf("ru_nivcsw   = %ld\n", usage.ru_nivcsw);                                   // $B0U?^$7$J$$%3%s%F%-%9%H@Z$jBX$((B

    return(0);
}
