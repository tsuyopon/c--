/*
 * mmap$B$r;H$C$?%a%b%j3d$jEv$F$r9T$&(B
 *  mmap$B$O%f!<%6!<6u4V$+$i%+!<%M%k6u4V$K%3%T!<$9$k=hM}$,B8:_$7$J$$$N$G(Bfopen$BEy$HHf3S$7$F$bD69bB.$i$7$$(B
 *
 * REFERENCE: http://linuxjm.sourceforge.jp/html/LDP_man-pages/man2/mmap.2.html
 */
// http://funini.com/kei/mmap/mmap_api.shtml
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define handle_error(msg) \
    do { perror(msg); exit(EXIT_FAILURE); } while (0)

int main(int argc, char *argv[])
{
    char *addr;
    int fd;
    struct stat sb;
    off_t offset, pa_offset;
    size_t length;
    ssize_t s;

    if (argc < 3 || argc > 4) {
        fprintf(stderr, "%s file offset [length]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        handle_error("open");

    if (fstat(fd, &sb) == -1)           /* called fstat to obtain file size */
        handle_error("fstat");

    offset = atoi(argv[2]);
    pa_offset = offset & ~(sysconf(_SC_PAGE_SIZE) - 1);  // sysconf(_SC_PAGE_SIZE) == getpagesize()
        /* offset for mmap() must be page aligned */

    // $B%*%U%;%C%H$N0LCV$,%U%!%$%k%5%$%:$rD62a$7$F$$$?$i%(%i!<(B
    if (offset >= sb.st_size) {         // st_size means file size.
        fprintf(stderr, "offset is past end of file\n");
        exit(EXIT_FAILURE);
    }

    // length$B0z?t$,;XDj$5$l$?>l9g$H;XDj$5$l$J$+$C$?>l9g$G<hF@$9$k(Blength$B$r7hDj$9$k(B
    if (argc == 4) {
        length = atoi(argv[3]);
        if (offset + length > sb.st_size)
            length = sb.st_size - offset;
                /* Can't display bytes past end of file */

    } else {    /* No length arg ==> display to end of file */
        length = sb.st_size - offset;
    }

    addr = mmap(NULL, length + offset - pa_offset, PROT_READ, MAP_PRIVATE, fd, pa_offset);
    if (addr == MAP_FAILED)
        handle_error("mmap");

    s = write(STDOUT_FILENO, addr + offset - pa_offset, length);
    if (s != length) {
        if (s == -1)
            handle_error("write");

        fprintf(stderr, "partial write");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}
