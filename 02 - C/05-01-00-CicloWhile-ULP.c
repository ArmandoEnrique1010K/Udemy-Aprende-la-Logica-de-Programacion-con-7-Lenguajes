#include <stdio.h>
#include <stdbool.h>
int main() {
	// Ciclo while
	// Definir las variables
	int contador = 0, repeticiones = 5;
	// ciclo while
	while (contador < repeticiones){
		//Imprimimos
		printf("\nBuenos dias... %d\n", contador);
		//contador = contador + 1;
		contador++;
		// Condicion a evaluar
		bool condicion = contador < repeticiones;
		printf("%d < %d -> %d\n", contador, repeticiones, condicion);
		
	}
	printf("Ya estamos fuera del ciclo while");
	
	return 0;
}

