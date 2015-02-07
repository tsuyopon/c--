/*
 * brk$B4X?t$H(Bsbrk$B4X?t$O8=BeE*$J2>A[%a%b%j4IM}$,8=$l$k0JA0$N8E$$%$%s%?!<%U%'%$%9$G$9!#(Bmalloc$B$GMxMQ$5$l$F$$$^$9(B
 * brk$B$H(Bsbrk$B$ODI2C%a%b%j$r3NJ]$9$k$?$a$NMxMQ$5$l$k(Bmmap$B$N$h$&$J%$%s%?!<%U%'%$%9$G$9!#(B
 *
 * sbrk()$B%7%9%F%`%3!<%k$O!"%W%m%;%9$,<hF@$7$?%a%b%jNN0h$rC1=c$K3HBg$7$h$&$H$7$^$9$,!"(BMMU$B$N$J$$(BCPU$B$N>l9g$K$O(B
 * $B2>A[%a%b%j5!9=$r07$&$3$H$,$G$-$J$$$?$a!"B>$N%W%m%;%9$,;H$C$F$$$k%a%b%jNN0h$K$V$D$+$C$F$7$^$&2DG=@-$,$"$j$^$9!#(B
 * $B$=$N$?$a!"(BMMU$B$N$J$$(BCPU$B>e$G(Bsbrk()$B%7%9%F%`%3!<%k$r;HMQ$9$k$N$O4m81$G$9!#(Bmalloc$B$r;H$&(Bglibc$B$O(BMMU$B$N$J$$(BCPU$B$G$O;HMQ$G$-$^$;$s(B
 * $B$J$*!"(Bmmap()$B%7%9%F%`%3!<%k$O(Bsbrk()$B$H0[$J$j%W%m%;%9$,<hF@$7$?%a%b%jNN0h$H$OA4$/JL$N6u$$$F$$$k%a%b%jNN0h$+$i<hF@$7$h$&$H$9$k$N$G!"(BMMU$B$,$J$$(BCPU$B$G$bMxMQ2DG=$G$9!#(B
 * 
 * REFERENCE: http://capm-network.com/?tag=C%E8%A8%80%E8%AA%9E%E3%82%B7%E3%82%B9%E3%83%86%E3%83%A0%E3%82%B3%E3%83%BC%E3%83%AB-sbrk
 */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *s;


  // sbrk$B$O%R!<%WNN0h$N%V%l!<%/CM$r2C;;$7$FJQ99$7$^$9!#(B
  // $B%W%m%;%9$N%a%b%jL$3d$jEv$FNN0h$r!V%R!<%W!W$H$$$$!"%R!<%W>e$NL$3d$jEv$F%a%b%j$N@hF,%"%I%l%9$r!V%V%l!<%/CM!W$H$$$$$^$9!#(B
  //
  // sbrk$B%7%9%F%`%3!<%k$O%V%l!<%/CM$r%P%$%H?t;XDj$G2C;;$7$^$9!#(B 
  //    $B@0?t$r;XDj$7$F(Bsbrk$B$r<B9T$9$k$H!"%R!<%WNN0h$K%a%b%j$rF0E*$K3d$jEv$F$^$9!#(B
  //    $BIi?t$r;XDj$7$F(Bsbrk$B$r<B9T$9$k$H!"$=$NJ,$N%a%b%j$O2rJ|$5$l$^$9!#(B 

  // [memo] "warning: comparison between pointer and integer [enabled by default]"$B$N(Bwarning$B%(%i!<$N$?$a(B(void*)$B$G%-%c%9%H$9$k(B
  if ((s = sbrk(13)) == (void*)-1) {  // 13 = "Hello World\n"
    perror("sbrk");
    return 1;
  }

  strcpy(s, "Hello World\n");
  write(1, s, 12);

  // brk$B%7%9%F%`%3!<%k5Z$S(Bsbrk$B%7%9%F%`%3!<%k$rMxMQ$7$F%V%l!<%/CM$rJQ99$9$k$3$H$G!"%a%b%j$N3d$jEv$F$H2rJ|$r9T$&$3$H$,$G$-$^$9!#(B 
  // 
  // brk$B%7%9%F%`%3!<%k$O%W%m%;%9$K?7$7$$%V%l!<%/CM$rG$0U$K@_Dj$7$^$9!#(B 
  //    $B;XDj$7$?%V%l!<%/CM$,8=:_$N%V%l!<%/CM$h$jBg$-$$>l9g$K$O!"%R!<%WNN0h$K%a%b%j$r3d$jEv$F$^$9!#(B
  //    $B;XDj$7$?%V%l!<%/CM$,8=:_$N%V%l!<%/CM$h$j>.$5$$>l9g$K$O!"%R!<%WNN0h$KF0E*$K3d$jEv$F$i$l$?%a%b%j$r2rJ|$7$^$9!#(B 
  if (brk(s) < 0) {
    perror("brk");
    return 1;
  }

  return 0;
}
