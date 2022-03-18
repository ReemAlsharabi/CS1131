TARGETS	=		counterType 

all:		$(TARGETS)

counterType :		counterTypeTestDriver.o  counterType.o
	g++ -o		counterType		counterTypeTestDriver.o		counterType.o

counterTypeTestDriver.o:		counterTypeTestDriver.cc		counterType.h
	g++ -c counterTypeTestDriver.cc

counterType.o:		counterType.cc		counterType.h
	g++ -c counterType.cc

clean:$
	rm -f *.o counterType
