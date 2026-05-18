#ifndef ATAC_TUTORIAL_STDIO_H
#define ATAC_TUTORIAL_STDIO_H

#define EOF (-1)
#define NULL ((void *)0)

typedef struct __sFILE FILE;

extern FILE *fopen();
extern int fclose();
extern int getc();
extern int fgetc();
extern int printf();
extern int fprintf();
extern int fputs();
extern int puts();

extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;

#define stdin  __stdinp
#define stdout __stdoutp
#define stderr __stderrp

#endif
