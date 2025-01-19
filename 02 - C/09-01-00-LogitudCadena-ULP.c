#include<stdio.h>
#include<string.h>

int main() {
	// Definir una cadena
	char cadena[] = "Hola";
	printf("Cadena: %s\n", cadena);
	// Obtenemos la longitud de la cadena
	printf("Largo cadena: %d", strlen(cadena));
	printf("Longitud cadena: %lu\n",sizeof(variable_cadena));
	
	//Recorremos cada caracter
	for(int i = 0; i < strlen(cadena); i++){
		printf("\n%c", cadena[i]);
	}
	
	return 0;
}

