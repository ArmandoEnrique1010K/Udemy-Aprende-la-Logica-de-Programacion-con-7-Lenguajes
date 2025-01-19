#include <stdio.h>

int main() {
	// Imprimir los Numeros del 0 al 5 ascendente
	int contador = 0, maximo = 5;
	// Simplificacion ciclo while
	while ( contador <= maximo )
		printf("%d ", contador++);
	
	
	//while( contador <= maximo ){
	//	printf("%d\n", contador);
	//	contador++;
	//}
	
	return 0;
}

