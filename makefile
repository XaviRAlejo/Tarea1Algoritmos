all: tarea
tarea: tarea.o
	g++ tarea.o -o main
%.o:  %.cpp
	g++ -c $^ -Wall
clean:
	rm *o tarea
