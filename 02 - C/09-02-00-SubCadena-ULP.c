#include <stdio.h>
#include <string.h> 

int main(void)
{
	char cadena[] = "Hola Mundo";
	char subcadena[10];
	
	// Copiamos a partir del caracter 0, se copian 4 caracteres
	int inicio = 0, nCaracteres = 4; // Hola
	//int inicio = 4, nCaracteres = 6;// Mundo
	//void *strncpy(void *destination, const void * source, size number);
	strncpy(subcadena, &cadena[inicio], nCaracteres);
	subcadena[nCaracteres] = '\0';//en el ultimo indice se agrega el caracter nulo
	printf("Cadena original: %s\n", cadena);
	printf("Subcadena: %s",subcadena);
	
	return 0;
}
