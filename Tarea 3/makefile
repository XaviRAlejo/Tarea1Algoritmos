all: problema2 problema1

problema1.o:  problema1.cpp
	g++ -std=c++11 -c $^ -Wall
problema1: problema1.o
	g++ -std=c++11 problema1.o -o problema1

problema2.o:  problema2.cpp
	g++ -std=c++11 -c $^ -Wall
problema2: problema2.o
	g++ -std=c++11 problema2.o -o problema2
clean:
	rm *o problema2 problema1