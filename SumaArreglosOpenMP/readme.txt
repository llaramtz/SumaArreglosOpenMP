El desarrollo de esta actividad contribuye al cumplimiento de los objetivos:  

2.2 Diseñar algoritmos paralelos, implementándolos para resolver problemas numéricos y no numéricos.
2.3 Seleccionar modelos de paralelización apropiados a un programa aplicándolos en la creación de una versión paralela correcta que explote el ambiente de cómputo paralelo de última generación.

Instrucciones
La utilización de arreglos en la programación es muy común, por ejemplo piense en una suma de dos arreglos como la mostrada en la siguiente imagen, donde tenemos dos arreglos llamados A y B de 10 elementos cada uno y deseamos crear un tercer arreglo con la sumatoria de cada uno de los elementos en los mismos subíndices.

Esto es bastante sencillo en la programación pero el tiempo que tomará en calcularse el resultado depende directamente de la cantidad de elementos que tienen los arreglos y la velocidad del procesador en la que se ejecutan las operaciones. Las sumas individuales de los elementos se realizan una por una en orden según los subíndices, entonces ¿Qué pasaría si los arreglos tienen millones de elementos? 

La respuesta es que la suma de los arreglos tardaría bastante en resolverse. Entonces aquí podríamos aplicar la programación paralela para que la suma de algunos elementos de los arreglos se realicen en un thread, otra parte las controle otro thread y así sucesivamente, esto aprovechando que las sumas son independientes entre ellas.

Entonces podríamos pensar en algo como lo mostrado en la siguiente imagen.

Este es el proceso que deseamos replicar, para lo que debes:

Crear un proyecto en Visual Studio
Configurarlo para que pueda utilizar la librería OpenMP
Crear los arreglos y asignarles valores aleatorios o pedirle los valores al usuario (la cantidad de elementos puede ser de 1000 para ejemplificar el proceso y obtener rápidamente resultados)
Realizar un for paralelo a través de las funciones de la librería OpenMP
Imprimir los arreglos o parte de ellos para comprobar que el arreglo resultante contiene la suma de los dos arreglos 
