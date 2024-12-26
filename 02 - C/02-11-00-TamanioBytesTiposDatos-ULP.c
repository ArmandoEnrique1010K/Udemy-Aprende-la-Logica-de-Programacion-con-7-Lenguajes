#include <stdio.h>
#include <stdbool.h>

int main() {
	// sizeof
	// Definicion variables
	int entero;
	float flotante;
	double doble;
	char caracter;
	char cadena[] = "Hola Mundo";
	bool boleano = false;
	// Imprimir cada variable (tamanio)
	// %lu - long unsigned
	printf("int tamanio bytes: %lu", sizeof(entero));
	printf("\nfloat tamanio bytes: %lu", sizeof(flotante));
	printf("\ndouble tamanio bytes: %lu", sizeof(doble));
	printf("\nchar tamanio bytes: %lu", sizeof(caracter));
	printf("\ncadena tamanio bytes: %lu", sizeof(cadena));
	printf("\nbool tamanio bytes: %lu", sizeof(boleano));
	
	return 0;	
}
