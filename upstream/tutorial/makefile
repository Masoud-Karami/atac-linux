# $Header: /usr/build/atac/atac/tutorial/RCS/makefile.in,v 1.5 1998/08/23 23:00:36 tom Exp $

SHELL		= /bin/sh

srcdir          = .


CC		= gcc
CPP		= gcc -E
CPPFLAGS	= -I$(srcdir)
CFLAGS		= -O2 -Wno-implicit-function-declaration -std=gnu89 

wordcount:	wc.o main.o
		$(CC) -o wordcount wc.o main.o

.SUFFIXES : .i

.c.o:

	$(CC) $(CPPFLAGS) $(CFLAGS) -c $(srcdir)/$*.c

.c.i:

	$(CPP) -C $(CPPFLAGS) $(srcdir)/$*.c >$@

clean:		; rm -f wc.o main.o wordcount

cleanup:	clean
