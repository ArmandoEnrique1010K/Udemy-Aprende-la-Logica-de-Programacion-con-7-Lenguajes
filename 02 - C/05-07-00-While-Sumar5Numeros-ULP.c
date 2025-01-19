#include <stdio.h>

int main() {
	// Sumar los primeros 5 numeros
	int numero = 1, minimo = 0, maximo = 5, acumuladorSuma = 0;
	while ( numero <= maximo ){
		// Imprimimos lo que se va a sumar (sin alterar el resultado todavia)
		printf("(acumuladorSuma + numero) -> %d + %d\n", acumuladorSuma, numero);
		
		// Realizamos la suma parcial
		// acumuladorSuma = acumuladorSuma + numero
		acumuladorSuma += numero; 
		printf("Suma parcial acumulada: %d\n\n", acumuladorSuma);
		numero++;
	}
	printf("\nLa suma de los primeros 5 numeros es: %d", acumuladorSuma);
		   
	return 0;
}

