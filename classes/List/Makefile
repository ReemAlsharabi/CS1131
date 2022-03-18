TARGETS	=		list

all:		$(TARGETS)

list:		listTestDriver.o  list.o
	g++ -o		list		listTestDriver.o		list.o

listTestDriver.o:		listTestDriver.cc		list.h
	g++ -c listTestDriver.cc

list.o:		list.cc		list.h
	g++ -c list.cc

clean:$
	rm -f *.o list
