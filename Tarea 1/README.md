# Tarea1Algoritmos 1

Se resolvio el problema haciendo forward checking, para encontrar el camino a seguir bajando en el arbol, considerando que en el primer nivel del arbol se puede llegar al total de permutaciones, luego bajando un nivel, se puede llegar a una mitad por un camino, o a la otra mitad por el otro camino (basicamente cada camino tiene total_permutaciones/nivel), asi se fue recorriendo el arbol recursivamente con la funcion recoded().

se debe ejecutar el comando "make" por consola para compilar la tarea, para luego ejecutarla con "./tarea < archivo_in.txt > archivo_out.txt"