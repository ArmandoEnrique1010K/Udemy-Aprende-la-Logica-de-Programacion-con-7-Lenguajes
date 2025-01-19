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
	
	// Iteramos la matriz
	printf("-----Iteramos la matriz-----\n");
	for(int ren=0 ; ren < RENGLONES ; ren++){
		printf("\nrenglon (pivote): %d", ren);
		for(int col=0 ; col < COLUMNAS ; col++){
			printf("\nMatriz[%d][%d]=%d", ren, col, matriz[ren][col]);
		}
		printf("\n");
	}
	
	return 0;
}

