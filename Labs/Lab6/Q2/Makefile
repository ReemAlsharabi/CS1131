TARGETS	=		productType 

all:		$(TARGETS)

productType :		productTypeTestDriver.o  productType.o
	g++ -o		productType		productTypeTestDriver.o		productType.o

productTypeTestDriver.o:		productTypeTestDriver.cc		productType.h
	g++ -c productTypeTestDriver.cc

productType.o:		productType.cc		productType.h
	g++ -c productType.cc

clean:$
	rm -f *.o productType
