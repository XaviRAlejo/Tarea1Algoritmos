# Tarea1Algoritmos 2

Se resolvio el problema ordenando primero los puntos en el eje x, luego se dividio el problema hasta el caso base de 2 puntos, donde se determino la distancia, para luego al retornar de las divisiones, comparar los minimos de cada mitad, obteniendo una posible distancia minima, luego hizo otro arreglo, el cual contenia los puntos que estaban en el rango que se genera entre la division y la distancia minima que se determino, estos son ordenados por x y se procede a cosiderar los que estan a una cierta distancia, chequeando otra posible solucion minima, una vez que esto retorna se printearon los valores x e y de cada punto.

se debe ejecutar el comando "make" por consola para compilar la tarea, para luego ejecutarla con "./tarea < input.txt > output.txt"