#include<stdio.h>

// Declaramos la funcion (firma del funcion)
void funcionRecursiva(int numero);


int main() {
	// Imprimir del 1 al 5 de manera recursiva
	int valor = 5;
	funcionRecursiva(valor);
	
	return 0;
}

// Agregamos la implementacion (cuerpo) funcion
void funcionRecursiva(int numero){
	// Caso Base
	if (numero == 1){
		printf("%d\n", numero);
	}
	else{
		// Caso recursivo
		funcionRecursiva( numero - 1);
		printf("%d\n", numero);
		
	}
}
