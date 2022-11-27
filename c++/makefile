cpp: a.out
	./a.out
a.out: main.o clases.o
	g++ main.o clases.o
main.o: main.cc interfaces.h clases.h clasesM.cc
	g++ -c main.cc
clases.o: clases.cc clases.h interfaces.h
	g++ -c clases.cc
