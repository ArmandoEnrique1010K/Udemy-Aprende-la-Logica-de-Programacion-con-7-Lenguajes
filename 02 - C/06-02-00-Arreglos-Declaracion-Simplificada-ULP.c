#include <stdio.h>

int main() {
	
	// Declaracion de un Arreglo
	int numerosArreglo[5];
	// Modificar los valores de un arreglo
	numerosArreglo[0] = 13;
	numerosArreglo[1] = 21;
	numerosArreglo[4] = 62;
	
	// Imprimir los valores
	printf("Valor 1 Arreglo[0] = %d", numerosArreglo[0]);
	printf("\nValor 2 Arreglo[1] = %d", numerosArreglo[1]);
	printf("\nValor 3 Arreglo[2] = %d", numerosArreglo[2]);
	printf("\nValor 4 Arreglo[3] = %d", numerosArreglo[3]);
	printf("\nValor 5 Arreglo[4] = %d", numerosArreglo[4]);
	
	// Sintaxis simplificada
	int numeros[] = {100, 200, 300, 400};
	printf("\n\nValor 1 Numeros[0] = %d", numeros[0]);
	// Esto no arroja un error, pero no debemos hacerlo
	printf("\nValor 5 Numeros[5] = %d", numeros[5]);
	
	return 0;
}

