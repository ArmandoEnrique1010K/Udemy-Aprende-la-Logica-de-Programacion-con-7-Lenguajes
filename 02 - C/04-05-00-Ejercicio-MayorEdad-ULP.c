#include <stdio.h>

int main() {
	// Algoritmo Mayor Edad
	const int EDAD_ADULTO = 18;
	printf("Proporciona tu edad: \n");
	int edadPersona;
	scanf("%d", &edadPersona);
	// Revisamos si la edad es mayor de edad
	if (edadPersona >= EDAD_ADULTO){
		printf("\nLa persona con edad %d es un adulto", edadPersona);
	}
	else{
		printf("\nLa persona con edad %d es menor de edad", edadPersona);
	}
	
	
	return 0;	
}
