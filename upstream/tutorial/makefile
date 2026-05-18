# $Header: /usr/build/atac/atac/tutorial/RCS/makefile.in,v 1.5 1998/08/23 23:00:36 tom Exp $

SHELL		= /bin/sh

srcdir          = .


CC		= clang -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion
CPP		= clang -std=gnu89 -Wno-implicit-function-declaration -Wno-implicit-int -Wno-return-type -Wno-int-conversion -E
CPPFLAGS	= -I$(srcdir)
CFLAGS		= -O2 -DBITS_PER_UNIT=8 -DBITS_PER_WORD=64 -DHOST_BITS_PER_INT=32 -DHOST_BITS_PER_LONG=64 

wordcount:	wc.o main.o
		$(CC) -o wordcount wc.o main.o

.SUFFIXES : .i

.c.o:

	$(CC) $(CPPFLAGS) $(CFLAGS) -c $(srcdir)/$*.c

.c.i:

	$(CPP) -C $(CPPFLAGS) $(srcdir)/$*.c >$@

clean:		; rm -f wc.o main.o wordcount

cleanup:	clean
