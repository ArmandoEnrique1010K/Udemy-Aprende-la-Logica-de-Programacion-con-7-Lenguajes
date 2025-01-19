#include <stdio.h>
#include <stdbool.h>

int main() {
	// Definimos variables
	int minimo = 0, maximo = 5;
	// Solicitamos un valor entre 0 y 5
	int dato;
	printf("Proporciona un dato entre 0 y 5: \n");
	scanf("%d", &dato);
	// Verificamos si estamos dentro de rango
	bool dentroRango = dato >= minimo && dato <= maximo;
	printf("\nValor dentro de rango? %d", dentroRango);
	
	return 0;
}

