#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

/*!
 * @brief     $B%Z!<%8%5%$%:$r<hF@$9$k(B
 * @return    0:success/-1:failure
 */
static int
get_memory_pagesize(void)
{
    int psize = 0;

    psize = getpagesize();
    if(psize < 0){
        printf("Error: getpagesize() %s\n", strerror(errno));
        return(-1);
    }

    return(psize);
}

int
main(int argc, char *argv[])
{
    int rc = 0;

    if(argc != 1){
        fprintf(stderr, "Usage: %s\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // getpagesize$B$O%7%9%F%`$N%a%b%j4IM}$K$*$1$k%Z!<%8%5%$%:$r<hF@$7$^$9!#(B 
    // C$B%i%$%V%i%j4X?t$N(Bsysconf(_SC_PAGESIZE)$B$rMxMQ$7$F$b!"F1MM$N>pJs$r<hF@$G$-$^$9!#(B 
    // OS$BKh$K$3$NCM$O$3$H$J$j$^$9(B
    rc = get_memory_pagesize();
    if(rc < 0) exit(EXIT_FAILURE);

    printf("pagesize = %d(byte/page)\n", rc);

    exit(EXIT_SUCCESS);
}
