#include <stdio.h>

int main() {
	// Manejo de Memoria y Apuntadores en C
	int miNumero = 10;
	printf("Valor miNumero: %d", miNumero);
	// El especificador de formato %p -> pointer
	// Pasamos la direccion de memoria con &
	printf("\nDireccion memoria miNumero: %p ", &miNumero);
	
	return 0;
}

