#include <stdio.h>
#define RENGLONES 2
#define COLUMNAS 3

int main() {
	// Definir constantes tamanio matriz
	//const int RENGLONES = 2;
	//const int COLUMNAS = 3;
	// Definimos la matriz
	//int matriz[RENGLONES][COLUMNAS] = {100, 200, 300, 400, 500, 600};
	int matriz[RENGLONES][COLUMNAS] = 
	{
		{100, 200, 300}, // Primer renglon
		{400,500,600}  // Segundo renglon
	};
	
	// Accedemos a los valores
	printf("Valor 1 [0][0] = %d\n", matriz[0][0]);
	printf("Valor 6 [1][2] = %d\n", matriz[1][2]);
	
	return 0;
}

