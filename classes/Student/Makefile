TARGETS	=		Student

all:		$(TARGETS)

Student:		StudentTestDriver.o  Student.o
	g++ -o		Student		StudentTestDriver.o		Student.o

StudentTestDriver.o:		StudentTestDriver.cc		Student.h
	g++ -c StudentTestDriver.cc

Student.o:		Student.cc		Student.h
	g++ -c Student.cc

clean:$
	rm -f *.o Student
