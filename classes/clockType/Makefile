TARGETS	=		clockType

all:		$(TARGETS)

clockType:		clockTypeTestDriver.o  clockType.o
	g++ -o		clockType		clockTypeTestDriver.o		clockType.o

clockTypeTestDriver.o:		clockTypeTestDriver.cc		clockType.h
	g++ -c clockTypeTestDriver.cc

clockType.o:		clockType.cc		clockType.h
	g++ -c clockType.cc

clean:$
	rm -f *.o clockType
