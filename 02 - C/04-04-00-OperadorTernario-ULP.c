#include <stdio.h>

int main() {
	// Sentencia if-else
	// Verificar si un numnero es positivo
	printf("Proporciona un numero: \n");
	int miNumero;
	scanf("%d", &miNumero);
	// Verificamos si el numero es positivo
/*	if (miNumero > 0){*/
/*		printf("Valor positivo: %d", miNumero);*/
/*	}*/
/*	else{*/
/*		printf("Valor Cero: %d", miNumero);*/
/*	}*/
	
	// Operador Ternario
	//(expresion) ? "verdadero" : "falso";
	(miNumero > 0) ? printf("Positivo") : printf("Cero o Negativo");
	
	
	
	return 0;	
}
