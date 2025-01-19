#include <stdio.h>

int main() {
	// Definimos el arreglo
	int largoArreglo = 5;
	int numerosArreglo[largoArreglo];
	// Modificar los valores de un arreglo
	numerosArreglo[0] = 13;
	numerosArreglo[1] = 21;
	numerosArreglo[4] = 62;
	
	// Iteramos todos los valores usando un ciclo for
	printf("Valores del Arreglo: \n");
	for (int i = 0;i < largoArreglo;i++) {
		printf("\nValor %d [%d] = %d",i+1,i, numerosArreglo[i]);
	}
	
	return 0;
}
