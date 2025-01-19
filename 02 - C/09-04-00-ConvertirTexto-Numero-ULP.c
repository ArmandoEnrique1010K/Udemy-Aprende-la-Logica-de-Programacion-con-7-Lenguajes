#include<stdio.h>
#include<stdlib.h>

int main() {
	// Convertir de texto a numero
	char cadena1[] = "10";
	char cadena2[] = "20";
	//int atoi(const char *string);
	// atoi - Ascii to int
	// atof - Ascii to float
	// Si no es un numero regresa 0
	int resultado = atoi(cadena1) + atoi(cadena2);
	
	printf("Resultado suma: %d\n",resultado);
	
	return 0;
}
