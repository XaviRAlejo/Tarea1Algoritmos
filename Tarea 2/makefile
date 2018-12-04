all: tarea
tarea.o:  tarea.cpp
	g++ -std=c++11 -c $^ -Wall
tarea: tarea.o
	g++ -std=c++11 tarea.o -o tarea
clean:
	rm *o tarea
