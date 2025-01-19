#include <stdio.h>
#include <stdbool.h>

int main() {
	// Sentencia If-else
	// Verificar si un numero es positivo
	printf("Proporciona un numero: \n");
	int miNumero;
	scanf("%d", &miNumero);
	// Verificamos si el numero es positivo
	// Recordar que C es sensible a mayusculas y minusculas
	// IF o If marca error, lo correcto es: if
	if (miNumero > 0){
		printf("\nValor positivo: %d", miNumero);
	}
	else if (miNumero < 0 ){
		printf("\nValor negativo: %d", miNumero);
	}
	else{
		printf("\nValor es cero: %d", miNumero);
	}
	
	return 0;
}

