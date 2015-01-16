/*
 * REF: http://wiki.bit-hive.com/north/pg/vfork
 *
 * fork$B$H(Bvfork$B$N0c$$$rM}2r$9$k$?$a$N%5%s%W%k%W%m%0%i%`(B
 * vfork$B$O(Bfork$B$H0[$J$j!";R%W%m%;%9<B9T$N4V$O?F%W%m%;%9$O2TF/$7$J$$!#(B
 * fork$B$H(Bvfork$B$r@Z$jBX$($FK\%W%m%0%i%`$rF0:n$5$;$F$_$F$=$N0c$$$rM}2r$9$k$3$H(B
 */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <err.h>  

int a = 0;

int main()
{
       pid_t   pid;
       int     i;

       pid = vfork();
//       pid = fork();
       if (pid == 0) {
               a = 1;
               for (i = 0; i < 5; i++) {
                       printf("child %d\n", i + 1);
                       sleep(1);
               }
               exit (EXIT_SUCCESS);
       }
       else {
               printf("*data %d\n", a);
               for (i = 0; i < 5; i++) {
                       printf("parent %d\n", i + 1);
                       sleep(1);
               }
               exit (EXIT_SUCCESS);
       }
}
