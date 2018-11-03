all: tarea
tarea: tarea.o
	g++ tarea.o -o tarea
%.o:  %.cpp
	g++ -c $^ -Wall
clean:
	rm *o tarea
