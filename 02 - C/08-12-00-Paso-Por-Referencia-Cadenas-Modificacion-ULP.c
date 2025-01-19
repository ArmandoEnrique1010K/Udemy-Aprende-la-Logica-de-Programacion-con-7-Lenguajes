#include<stdio.h>

char* cambiarValor(char *parametro){
	// Cambiamos los valores del arreglo
	parametro = "Adios";
	return parametro;
}
	
int main() {
	//Ejemplo de paso por referencia
	//char arg[] = "Hola";
	char *arg = "Hola";
	printf("Antes llamar funcion: %s", arg);
	// Los arreglos siempre se pasan por referencia
	arg = cambiarValor( arg );
	printf("\nDespues llamar funcion: %s", arg);
		
	return 0;
}
	
	
