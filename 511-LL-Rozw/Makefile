#   Plik:  Makefile do zada� z list powi�zanych
# Wersja:  22 X 2002
#  Autor:  W. Bzyl, <matwb@univ.gda.pl>

CFLAGS = -Wall -ggdb

EXERCISES =Count.c GetNth.c DeleteList.c Pop.c InsertNth.c \
SortedInsert.c InsertSort.c Append.c RecursiveReverse.c

SOURCES = Makefile utils.c utils.h \
$(EXERCISES) \
FrontBackSplit.c RemoveDuplicates.c \
MoveNode.c AlternatingSplit.c ShuffleMerge.c SortedMerge.c MergeSort.c \
SortedIntersect.c Reverse.c

utils.o : utils.c utils.h

Count.o : Count.c utils.h
Count : Count.o utils.o
	$(CC) $^ -o $@

GetNth.o : GetNth.c utils.h
GetNth : GetNth.o utils.o
	$(CC) $^ -o $@

DeleteList.o : DeleteList.c utils.h
DeleteList : DeleteList.o utils.o
	$(CC) $^ -o $@

Pop.o : Pop.c utils.h
Pop : Pop.o utils.o
	$(CC) $^ -o $@

InsertNth.o : InsertNth.c utils.h
InsertNth : InsertNth.o utils.o
	$(CC) $^ -o $@

SortedInsert.o : SortedInsert.c utils.h
SortedInsert : SortedInsert.o utils.o
	$(CC) $^ -o $@

InsertSort.o : InsertSort.c utils.h
InsertSort : InsertSort.o utils.o
	$(CC) $^ -o $@

Append.o : Append.c utils.h
Append : Append.o utils.o
	$(CC) $^ -o $@

FrontBackSplit.o : FrontBackSplit.c utils.h
FrontBackSplit : FrontBackSplit.o utils.o
	$(CC) $^ -o $@

RemoveDuplicates.o : RemoveDuplicates.c utils.h
RemoveDuplicates : RemoveDuplicates.o utils.o
	$(CC) $^ -o $@

MoveNode.o : MoveNode.c utils.h
MoveNode : MoveNode.o utils.o
	$(CC) $^ -o $@

AlternatingSplit.o : AlternatingSplit.c utils.h
AlternatingSplit : AlternatingSplit.o utils.o
	$(CC) $^ -o $@

ShuffleMerge.o : ShuffleMerge.c utils.h
ShuffleMerge : ShuffleMerge.o utils.o
	$(CC) $^ -o $@

SortedMerge.o : SortedMerge.c utils.h
SortedMerge : SortedMerge.o utils.o
	$(CC) $^ -o $@

MergeSort.o : MergeSort.c utils.h
MergeSort : MergeSort.o utils.o
	$(CC) $^ -o $@

Reverse.o : Reverse.c utils.h
Reverse : Reverse.o utils.o
	$(CC) $^ -o $@

RecursiveReverse.o : RecursiveReverse.c utils.h
RecursiveReverse : RecursiveReverse.o utils.o
	$(CC) $^ -o $@

clean :
	rm -f *~ \#* core *.o programs.{ps,ljet4} \
04-LinkedLists-Solutions.tar.gz \
Count GetNth DeleteList Pop InsertNth \
SortedInsert InsertSort Append FrontBackSplit RemoveDuplicates \
MoveNode AlternatingSplit ShuffleMerge SortedMerge MergeSort \
SortedIntersect Reverse RecursiveReverse


dist :
	tar zcvf 04-LinkedLists-Solutions.tar.gz $(SOURCES)

programs.ps: $(EXERCISES)
	enscript -GE -p$@ $^
#	enscript -Xlatin2 -G2rE -U2 -p$@ $< 

programs.ljet4 : programs.ps
	gs -dNOPAUSE -dBATCH -sDEVICE=ljet4 -sOutputFile=programs.ljet4 $<
