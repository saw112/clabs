#
#                                       1.X.2003
# Makefile do przykladow omawianych na wykladzie

# Tablice łącznikowe.

CFLAGS = -Wall -g
LDFLAGS = -lm

csources = dtable.c
programs = $(csources:.c=)

.PHONY : clean

clean :
	rm -f *~ \#* core *.o $(programs)
