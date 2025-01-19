#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	// Nos permite que cada vez que ejecutamos 
	// los numeros sean aleatorios
	srand(time(0));
	// Numero al azar entre 0 y 100. Uso del operador %
	int valorAleatorio = (rand()%100);
	printf("Valor al azar (entre 0 y 100) = %d\n", valorAleatorio);
	// Numero aleatorio entre 100 y 200
	//valorAleatorio =  rand()%(201-100) + 100;
	int min = 100, max = 200;
	valorAleatorio =  rand()%((max + 1) - min) + min;
	printf("Valor al azar (entre 100 y 200) = %d\n", valorAleatorio);
	
	return 0;
}

