#
# JP2                                                           1.X.2003
#
#
# Gra ,,K�ko i krzy�yk''

CC = gccx
CFLAGS = -Wall -g -pedantic -ansi -I/usr/include/ncurses
LDFLAGS = -lncurses

csources = main.c kik.c ui-kik.c minimax.c
headers = kik.h ui-kik.h minimax.h

programs = kik

all : $(programs)

main.o : main.c kik.h

kik.o : kik.c kik.h ui-kik.h

ui-kik.o : ui-kik.c ui-kik.h kik.h

minimax.o : minimax.c minimax.h kik.h

$(programs) : main.o kik.o ui-kik.o minimax.o
	$(CC) -o $@ $^

.PHONY : clean 

clean:
	rm -f core \#* *~ *.o $(programs)
