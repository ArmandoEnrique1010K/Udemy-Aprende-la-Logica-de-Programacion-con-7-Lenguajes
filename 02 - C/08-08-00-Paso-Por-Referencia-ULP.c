#include<stdio.h>

void cambiarValor(int *parametro){
	*parametro = 20;
}

int main() {
	//Ejemplo de paso por referencia
	int argumento = 10;
	printf("Antes llamar funcion: %d", argumento);
	cambiarValor( &argumento );
	printf("\nDespues llamar funcion: %d", argumento);
	
	return 0;
}

