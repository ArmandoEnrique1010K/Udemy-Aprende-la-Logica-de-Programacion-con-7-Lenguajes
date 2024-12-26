#include <stdio.h>

int main() {
	// 1. Declarar variable
	int tamanio_cadena = 30;
	char nombre[tamanio_cadena];
	// 2. Inidicar al usuario que proporcione el valor
	printf("Proporciona tu nombre:");
	// 3. Leer la informacion
	//scanf("%[^'\n']s", nombre);
	//fgets(nombre, tamanio_cadena, stdin);
	gets(nombre);
	// 4. Imprimimos el valor
	printf("El nombre es: %s", nombre);
	
	return 0;
}

