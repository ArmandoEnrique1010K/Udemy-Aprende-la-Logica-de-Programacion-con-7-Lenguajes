#include <stdio.h>

int main() {
	// Manejo de Memoria y Apuntadores en C
	int miNumero = 10;
	printf("Valor miNumero: %d", miNumero);
	// El especificador de formato %p -> pointer
	// Pasamos la direccion de memoria con &
	printf("\nDireccion memoria miNumero: %p ", &miNumero);
	// Definimos una variable apuntador (recibe la direccion de memoria)
	// tiene que ser del mismo tipo de la variable a la que apunta
	int *apuntador = &miNumero;
	printf("\nValor apuntador (dir. memoria): %p", apuntador);
	// Valor almacenado en la direccion donde apuntador
	// A esto se le conoce como dereference (obtener el valor de la dir. memoria)
	printf("\nValor almacenado en dir. memoria: %d", *apuntador);
	// Modificar el valor con usando la variable puntero
	printf("\nModificamos el valor...");
	*apuntador = 20;
	// Tambien se pueden usar parentesis pero es opcional
	//(*apuntador) = 30;
	// Imprimimos nuevamente el valor con la variable y con el apuntador
	printf("\nValor miNumero: %d", miNumero);
	printf("\nValor en dir. memoria del apuntador: %d", *apuntador);
	
	
	
	// En resumen
	// * se usa para definir variables de tipo apuntador
	// * se utiliza para dereferenciar una direccion de memoria
	
	return 0;
}

