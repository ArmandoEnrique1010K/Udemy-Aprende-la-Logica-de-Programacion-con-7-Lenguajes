#include <stdio.h>
#include <string.h>
int main()
{
	// La cadena destino debe ser lo suficientemente grande 
	// para soportar el resultado de la concatenacion
	// Sino manda error: ERROR: Source and destination overlap in strcat...
	char destino[11] = "Hola "; 
	char origen[] = "Mundo";
	//char *strcat(char *dest, const char *src)
	/* Proceso basico:
	1. Toma la cadena destino
	2. Encuentra el caracter nulo ('\0')
	3. Copia la cadena origen comenzando con el caracter nulo de la cadena destino
	4. Agrega el caracter nulo a la cadena destino ('\0')
	*/
	strcat(destino,origen);
	printf("Concatenacion de cadenas: %s\n", destino);
	
	// Tambien podemos pasar directamente la cadena a la salida
	//printf("Concatenacion de cadenas: %s\n", strcat(destino,origen));
	
	return 0;
}
