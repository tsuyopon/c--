/*
 * $B%U%!%$%k$r0z?t$K;XDj$9$k$H$=$N>pJs$r=PNO$9$k%W%m%0%i%`(B
 * REFERENCE: http://linuxjm.sourceforge.jp/html/LDP_man-pages/man2/stat.2.html
 */

// struct stat {
//     dev_t     st_dev;     /* $B%U%!%$%k$,$"$k%G%P%$%9$N(B ID */
//     ino_t     st_ino;     /* inode $BHV9f(B */
//     mode_t    st_mode;    /* $B%"%/%;%9J]8n(B */
//     nlink_t   st_nlink;   /* $B%O!<%I%j%s%/$N?t(B */
//     uid_t     st_uid;     /* $B=jM-<T$N%f!<%6(B ID */
//     gid_t     st_gid;     /* $B=jM-<T$N%0%k!<%W(B ID */
//     dev_t     st_rdev;    /* $B%G%P%$%9(B ID ($BFC<l%U%!%$%k$N>l9g(B) */
//     off_t     st_size;    /* $BA4BN$N%5%$%:(B ($B%P%$%HC10L(B) */
//     blksize_t st_blksize; /* $B%U%!%$%k%7%9%F%`(B I/O $B$G$N(B
//                              $B%V%m%C%/%5%$%:(B */
//     blkcnt_t  st_blocks;  /* $B3d$jEv$F$i$l$?(B 512B $B$N%V%m%C%/?t(B */
// };
// 
//     /* Linux 2.6 $B0J9_$G$O!"%+!<%M%k$O0J2<$N%?%$%`%9%?%s%W(B
//        $B%U%#!<%k%I$G%J%NIC$N@:EY$r%5%]!<%H$7$F$$$k!#(B
//        Linux 2.6 $B$h$jA0$N%P!<%8%g%s$G$N>\:Y$O(B
//        $B2<5-$N!VCm0U!W$r;2>H!#(B */
// 
//     struct timespec st_atim;  /* $B:G=*%"%/%;%9;~9o(B */
//     struct timespec st_mtim;  /* $B:G=*=$@5;~9o(B */
//     struct timespec st_ctim;  /* $B:G=*>uBVJQ99;~9o(B */
// 
// #define st_atime st_atim.tv_sec      /* $B8eJ}8_49@-(B */
// #define st_mtime st_mtim.tv_sec
// #define st_ctime st_ctim.tv_sec
// };

#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    struct stat sb;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <pathname>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if (stat(argv[1], &sb) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }

    printf("File type:                ");

    switch (sb.st_mode & S_IFMT) {
    case S_IFBLK:  printf("block device\n");            break;
    case S_IFCHR:  printf("character device\n");        break;
    case S_IFDIR:  printf("directory\n");               break;
    case S_IFIFO:  printf("FIFO/pipe\n");               break;
    case S_IFLNK:  printf("symlink\n");                 break;
    case S_IFREG:  printf("regular file\n");            break;
    case S_IFSOCK: printf("socket\n");                  break;
    default:       printf("unknown?\n");                break;
    }

    printf("I-node number:            %ld\n", (long) sb.st_ino);

    printf("Mode:                     %lo (octal)\n",
            (unsigned long) sb.st_mode);

    printf("Link count:               %ld\n", (long) sb.st_nlink);
    printf("Ownership:                UID=%ld   GID=%ld\n",
            (long) sb.st_uid, (long) sb.st_gid);

    printf("Preferred I/O block size: %ld bytes\n",
            (long) sb.st_blksize);
    printf("File size:                %lld bytes\n",
            (long long) sb.st_size);
    printf("Blocks allocated:         %lld\n",
            (long long) sb.st_blocks);

    printf("Last status change:       %s", ctime(&sb.st_ctime));
    printf("Last file access:         %s", ctime(&sb.st_atime));
    printf("Last file modification:   %s", ctime(&sb.st_mtime));

    exit(EXIT_SUCCESS);
}
