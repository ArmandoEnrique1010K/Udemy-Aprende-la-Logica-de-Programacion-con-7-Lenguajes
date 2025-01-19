#include <stdio.h>

int main() {
	// Definir constantes tamanio matriz
	 int RENGLONES = 2;
	const int COLUMNAS = 3;
	// Definimos la matriz
	int matriz[RENGLONES][COLUMNAS];
	//Llenamos la matriz manualmente
	matriz[0][0] = 100;
	matriz[0][1] = 200;
	matriz[0][2] = 300;
	matriz[1][0] = 400;
	matriz[1][1] = 500;
	matriz[1][2] = 600;
	// Accedemos a los valores
	printf("Valor 1 [0][0] = %d\n", matriz[0][0]);
	printf("Valor 6 [1][2] = %d\n", matriz[1][2]);
	
	return 0;
}

