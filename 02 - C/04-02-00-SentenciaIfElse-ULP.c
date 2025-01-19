#include <stdio.h>

int main() {
	// Sentencia if-else
	// Verificar si un numnero es positivo
	printf("Proporciona un numero: \n");
	int miNumero;
	scanf("%d", &miNumero);
	// Verificamos si el numero es positivo
	if (miNumero > 0){
		printf("Valor positivo: %d", miNumero);
	}
	else{
		printf("Valor Cero o Negativo: %d", miNumero);
	}
	return 0;	
}
