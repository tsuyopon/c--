# $B35MW(B
PLT(Procedure Linkage Table)$B$H(BGOT(Global Offset Table)$B$N;EAH$_$r3NG'$9$k!#(B

test.c$B$G;H$o$l$F$$$k6&M-%i%$%V%i%j$N(Bprintf$B4X?t$r8F$S=P$9$3$H$G!"(BPLT$B$N5sF0$r3NG'$7$^$9!#(B
```
$ gmake
$ ls ./a.out
```

# $B>\:Y(B
Global Offset Table$B$r;2>H$9$k!#(B

```
$ objdump -R a.out 

a.out:     file format elf64-x86-64

DYNAMIC RELOCATION RECORDS
OFFSET           TYPE              VALUE 
0000000000600ff8 R_X86_64_GLOB_DAT  __gmon_start__
0000000000601018 R_X86_64_JUMP_SLOT  puts
0000000000601020 R_X86_64_JUMP_SLOT  __libc_start_main
0000000000601028 R_X86_64_JUMP_SLOT  __gmon_start__
```


main$B$N2U=j$@$1;2>H$9$k$3$H$K$9$k!#(Btest.c$B$N%=!<%9%3!<%I$G(Bprintf$B$,(B2$B9T$"$k$N$K$OLu$,$"$C$?!#(B
***$B$G(Bputs@plt$B$K:GE,2=$5$l$F$$$k$3$H$,$o$+$j$^$9!#(B
```
$ objdump -d a.out 
...
000000000040052d <main>:
  40052d:	55                   	push   %rbp
  40052e:	48 89 e5             	mov    %rsp,%rbp
  400531:	bf e0 05 40 00       	mov    $0x4005e0,%edi
  400536:	e8 d5 fe ff ff       	callq  400410 <puts@plt>      // ***
  40053b:	bf ee 05 40 00       	mov    $0x4005ee,%edi
  400540:	e8 cb fe ff ff       	callq  400410 <puts@plt>      // ***
  400545:	b8 00 00 00 00       	mov    $0x0,%eax
  40054a:	5d                   	pop    %rbp
  40054b:	c3                   	retq   
  40054c:	0f 1f 40 00          	nopl   0x0(%rax)
...


$B:#EY$O!"(BProcedure Linkage Table$B$r$_$F$_$k!#@h$[$I$N(Bcallq$B$G(B400410$B$r;X$7<($7$F$$$^$7$?$N$G$=$N2U=j$r$_$k$h$&$K$7$^$9!#(B
```
$ objdump -d -j .plt ./a.out

./a.out:     file format elf64-x86-64


Disassembly of section .plt:

0000000000400400 <puts@plt-0x10>:
  400400:	ff 35 02 0c 20 00    	pushq  0x200c02(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400406:	ff 25 04 0c 20 00    	jmpq   *0x200c04(%rip)        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40040c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400410 <puts@plt>:
  400410:	ff 25 02 0c 20 00    	jmpq   *0x200c02(%rip)        # 601018 <_GLOBAL_OFFSET_TABLE_+0x18>
  400416:	68 00 00 00 00       	pushq  $0x0
  40041b:	e9 e0 ff ff ff       	jmpq   400400 <_init+0x20>

0000000000400420 <__libc_start_main@plt>:
  400420:	ff 25 fa 0b 20 00    	jmpq   *0x200bfa(%rip)        # 601020 <_GLOBAL_OFFSET_TABLE_+0x20>
  400426:	68 01 00 00 00       	pushq  $0x1
  40042b:	e9 d0 ff ff ff       	jmpq   400400 <_init+0x20>

0000000000400430 <__gmon_start__@plt>:
  400430:	ff 25 f2 0b 20 00    	jmpq   *0x200bf2(%rip)        # 601028 <_GLOBAL_OFFSET_TABLE_+0x28>
  400436:	68 02 00 00 00       	pushq  $0x2
  40043b:	e9 c0 ff ff ff       	jmpq   400400 <_init+0x20>
```

$B$G$O(Bgdb$B$r;H$&$3$H$K$h$C$F!"(Bcallq$B$N#2$D$NA08e$G$N=hM}$r$_$F$_$k$3$H$K$7$^$9!#(B
$B$^$:$O!"(Bcallq$B$N<jA0$G;_$a$^$9!#(B
```
$ gdb ./a.out 
(gdb) b main
Breakpoint 1 at 0x400531: file test.c, line 5.
(gdb) run
Starting program: /home/tsuyoshi/git/cpp/basic_linkage/dl/clang/sample1/hoge/./a.out 

Breakpoint 1, main () at test.c:5
5		printf("Hello, World!\n");
Missing separate debuginfos, use: debuginfo-install glibc-2.17-260.el7.x86_64
(gdb) disas
Dump of assembler code for function main:
   0x000000000040052d <+0>:	push   %rbp
   0x000000000040052e <+1>:	mov    %rsp,%rbp
=> 0x0000000000400531 <+4>:	mov    $0x4005e0,%edi
   0x0000000000400536 <+9>:	callq  0x400410 <puts@plt>
   0x000000000040053b <+14>:	mov    $0x4005ee,%edi
   0x0000000000400540 <+19>:	callq  0x400410 <puts@plt>
   0x0000000000400545 <+24>:	mov    $0x0,%eax
   0x000000000040054a <+29>:	pop    %rbp
   0x000000000040054b <+30>:	retq   
End of assembler dump.
```

$B$G$O!"$3$3$G(Bcallq$B$r<B9T$9$kA0$K@h$[$I$N(B0x400410$B$,;X$7<($7$F$$$?(B0x601018(.got.plt)$B$N%"%I%l%9@h$N%"%I%l%9$,$I$N$h$&$K$J$C$F$$$k$+$r3NG'$7$F$_$^$9!#(B
```
(gdb) x 0x601018
0x601018 <puts@got.plt>:	0x00400416
```

$B$G$O!"$=$N8e?J$a$F$_$^$9!##1$D$a$N(Bcallq$B$rDL2a$9$k$H(B0x601018$B$N%"%I%l%9$,(B0xf7a7e530$B$X$HJQ2=$7$^$7$?!#$3$N%"%I%l%9$,(Bputs$B4X?t$r;X$7<($7$F$$$k$H;W$o$l$^$9!#(B
```
(gdb) s
Hello, World!
6		printf("Goodbye, World!\n");
(gdb) x 0x601018
0x601018 <puts@got.plt>:	0xf7a7e530
(gdb) disas
Dump of assembler code for function main:
   0x000000000040052d <+0>:	push   %rbp
   0x000000000040052e <+1>:	mov    %rsp,%rbp
   0x0000000000400531 <+4>:	mov    $0x4005e0,%edi
   0x0000000000400536 <+9>:	callq  0x400410 <puts@plt>
=> 0x000000000040053b <+14>:	mov    $0x4005ee,%edi
   0x0000000000400540 <+19>:	callq  0x400410 <puts@plt>
   0x0000000000400545 <+24>:	mov    $0x0,%eax
   0x000000000040054a <+29>:	pop    %rbp
   0x000000000040054b <+30>:	retq   
End of assembler dump.
```

$B$J$*!"(B2$B$D$a$N(Bcallq$B$rDL2a$7$?8e$K$O(B0x601018$B$N%"%I%l%9$,=q$-JQ$o$i$J$$$3$H$r3NG'$7$F$*$-$^$9!#(B
```
(gdb) s
Goodbye, World!
7		return 0;
(gdb) x 0x601018
0x601018 <puts@got.plt>:	0xf7a7e530
(gdb) disas
Dump of assembler code for function main:
   0x000000000040052d <+0>:	push   %rbp
   0x000000000040052e <+1>:	mov    %rsp,%rbp
   0x0000000000400531 <+4>:	mov    $0x4005e0,%edi
   0x0000000000400536 <+9>:	callq  0x400410 <puts@plt>
   0x000000000040053b <+14>:	mov    $0x4005ee,%edi
   0x0000000000400540 <+19>:	callq  0x400410 <puts@plt>
=> 0x0000000000400545 <+24>:	mov    $0x0,%eax
   0x000000000040054a <+29>:	pop    %rbp
   0x000000000040054b <+30>:	retq   
End of assembler dump.
```

$B0J>e$K$h$j!"(BGOT$B$H(BPLT$B$N;EAH$_$r$_$^$7$?!#(B


# $B;29M;qNA(B
- $B%W%m%0%i%`$,(Bmain$B$K$?$I$j$D$/$^$G(B(PDF)
  - PLT$B$H(BGOT$B$H$$$&%9%i%$%I$r;2>H$9$k$HNI$$(B
  - http://ukai.jp/Slides/2006/1024-gree/binhacks.pdf
