# Tarea1Algoritmos 3
Para el Problema 1:

Este algoritmo funciona iterando sobre una lista de rocas, donde estas se encuentran implementadas en la clase rocas, que contiene su tipo, posición, distancia hacia la roca a su izquierda y distancia a la roca a su derecha.
Se asume que el inicio y el final del rio son rocas grandes, además de poseer los mismos componentes, en el caso de estar en una roca pequeña, se actualiza la distancia hacia la roca izquierda de la roca que procede a esta para tomar en cuenta que la roca actual se hunde.
Durante cada iteración se toma en cuenta los posibles saltos a las dos rocas siguientes a la actual, de estos se elige el que presente un salto menor hacia la derecha además de generar un salto de menor distancia a la izquierda al momento de la vuelta. Al ver este menor salto generado a la vuelta, solamente es necesario hacer un solo recorrido al arreglo.
Ademas de ver lo anterior, se comprará este salto (o el salto generado a la vuelta) con una variable maximo, siendo esta actualizada solo en el caso de el salto sea mayor a esta.

Para el Problema 2:

Este algoritmo funciona sobre una vector el cual se crea con los elementos que se leen desde el archivo despues de el numero N inicial (el cual indica cuantos numeros vienen en la secuencia), luego se realizo un chequeo por la subsecuencia creciente mayor, ya que al restar el largo del arreglo con la subsequencia mayor del arreglo (osea, con el LIS), podemos saber cuantos elementos del arreglo se deben cambiar de posicion para que este quede completamente ordenado.

se debe ejecutar el comando " make " por consola para compilar la tarea, para luego ejecutar las siguientes lineas para cada una:

Problema 1:
    " ./problema1 input.txt"

Problema 2:
    "./problema2 < input.txt"
