#include <stdio.h>

/*
Tipos de datos basicos en C
*/
int main() {
	// Tipo entero (formato %d, %i)
	int entero = 10;
	printf("Tipo entero: %i", entero);
	
	// Tipo flotante (formato %f)
	float flotante = 3800.5;
	printf("\nTipo flotante: %0.2f", flotante);
	
	// Tipo double (formato %f, %lf -> long float)
	double doble = 15.4;
	printf("\nTipo doble: %.2lf", doble);
	
	return 0;
}

