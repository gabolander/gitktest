#
# Semplice makefile per compilare i programmi necessari ..
#

# System environment
CC = gcc

CODEGEN =
OPTIMIZATION = -O0
# OPTIONS = -D_MG_BIG_ENDIAN_ -D_MG_NCURSES_
OPTIONS = 
DEBUG = -g
PRJ=sizes.c
PRGS=sizes

# CFLAGS = $(CODEGEN) $(OPTIMIZATION) $(OPTIONS) $(DEBUG)
CFLAGS = $(CODEGEN) $(OPTIMIZATION) $(OPTIONS)

LIB = 

COMPLINK = $(CC) $(CFLAGS) $(INCL) -Wall $(LIB)
COMPILE = $(CC) $(CFLAGS) $(INCL) -Wall -c

#SOURCES = sizes.c myutils.c
SOURCES = sizes.c
# OBJ = presta.o senal.o strfunz.o
OBJ = ${SOURCES:.c=.o}

# all: presta senal
all: sizes endian_det

sizes: sizes.o
	$(COMPLINK) -o $@ $^

sizes.o: sizes.c
	$(COMPILE) sizes.c

endian_det: endian_det.o
	$(COMPLINK) -o $@ $^

endian_det.o: endian_det.c
	$(COMPILE) endian_det.c

.PHONY: clean
clean:
	rm -f $(PRGS) $(OBJ) *~
