El desarrollo de esta actividad contribuye al cumplimiento de los objetivos:  

2.2 Dise�ar algoritmos paralelos, implement�ndolos para resolver problemas num�ricos y no num�ricos.
2.3 Seleccionar modelos de paralelizaci�n apropiados a un programa aplic�ndolos en la creaci�n de una versi�n paralela correcta que explote el ambiente de c�mputo paralelo de �ltima generaci�n.

Instrucciones
La utilizaci�n de arreglos en la programaci�n es muy com�n, por ejemplo piense en una suma de dos arreglos como la mostrada en la siguiente imagen, donde tenemos dos arreglos llamados A y B de 10 elementos cada uno y deseamos crear un tercer arreglo con la sumatoria de cada uno de los elementos en los mismos sub�ndices.

Esto es bastante sencillo en la programaci�n pero el tiempo que tomar� en calcularse el resultado depende directamente de la cantidad de elementos que tienen los arreglos y la velocidad del procesador en la que se ejecutan las operaciones. Las sumas individuales de los elementos se realizan una por una en orden seg�n los sub�ndices, entonces �Qu� pasar�a si los arreglos tienen millones de elementos? 

La respuesta es que la suma de los arreglos tardar�a bastante en resolverse. Entonces aqu� podr�amos aplicar la programaci�n paralela para que la suma de algunos elementos de los arreglos se realicen en un thread, otra parte las controle otro thread y as� sucesivamente, esto aprovechando que las sumas son independientes entre ellas.

Entonces podr�amos pensar en algo como lo mostrado en la siguiente imagen.

Este es el proceso que deseamos replicar, para lo que debes:

Crear un proyecto en Visual Studio
Configurarlo para que pueda utilizar la librer�a OpenMP
Crear los arreglos y asignarles valores aleatorios o pedirle los valores al usuario (la cantidad de elementos puede ser de 1000 para ejemplificar el proceso y obtener r�pidamente resultados)
Realizar un for paralelo a trav�s de las funciones de la librer�a OpenMP
Imprimir los arreglos o parte de ellos para comprobar que el arreglo resultante contiene la suma de los dos arreglos 
