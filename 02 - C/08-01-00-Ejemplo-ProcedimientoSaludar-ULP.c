#include <stdio.h>

// Definimos la funcion (procedimiento) saludar
void saludar(char mensaje[]){
	printf("Mensaje: %s\n", mensaje);
}

int main() {
	// Ejercicio para definir una funcion
	char argMensaje[50];
	printf("Proporciona el mensaje a mostrar: \n");
	scanf("%[^\n]s", argMensaje);
	saludar(argMensaje);
	saludar(argMensaje);
	saludar(argMensaje);
	
	
	return 0;
}

