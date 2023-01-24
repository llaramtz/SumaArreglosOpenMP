#include "pch.h"
#include <iostream>

#include <omp.h>

#define N 100000000
#define chunk 1000
#define mostrar 15

using namespace winrt;
using namespace Windows::Foundation;

void imprimeArreglo(float* d);


int main()
{
	/* Codigo para verificar el correcto funcionamiento de OpenMP
	std::cout << "Verificando!\n";

	# ifdef _OPENMP
	std::cout << "OMP todo chido" << std::endl;
    # endif
	*/

	std:: cout << "Sumando Arreglos en Paralelo!\n"; 
	float a[N], b[N], c[N];
	int i;
		for (i = 0; i < N; i++)
		{
			a[i] = i * 10;
			b[i] = (i + 3) * 3.7;
		}
	int pedazos = chunk;

	#pragma omp parallel for \
	shared(a, b, c, pedazos ) private ( i ) \
	schedule(static, pedazos)
		for (i = 0; i < N; i++)
			c[i] = a[i] + b[i];

		std::cout << "Tamaño del arreglo N: " << N << std::endl;
		std::cout << "Tamaño de la porción : " << chunk  << std::endl;
		std:: cout << "Imprimiendo las primeros " << mostrar << " valores del arreglo a : " << std :: endl;
		imprimeArreglo(a);
		std:: cout << "Imprimiendo las primeros " << mostrar << " valores del arreglo b : " << std :: endl;
		imprimeArreglo(b);
		std:: cout << " Imprimiendo las primeros " << mostrar << " valores del arreglo c : " << std :: endl;
		imprimeArreglo(c);
}

void imprimeArreglo(float* d)
{
	for (int x = 0; x < mostrar; x++)
		std::cout << d[x] << " - ";
	std::cout << std :: endl;
}

