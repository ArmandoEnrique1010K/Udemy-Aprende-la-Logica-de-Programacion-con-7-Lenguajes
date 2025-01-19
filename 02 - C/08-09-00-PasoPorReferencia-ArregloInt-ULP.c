#include<stdio.h>

void cambiarValor(int *parametro){
	// Cambiamos los valores del arreglo
	parametro[0] = 4;
	parametro[1] = 5;
	parametro[2] = 6;
}

int main() {
	//Ejemplo de paso por valor
	int arg[] = {1, 2, 3};
	printf("Valores array antes fun: %d %d %d", arg[0], arg[1], arg[2]);
	cambiarValor( arg );
	printf("\nValores array despues fun: %d %d %d", arg[0], arg[1], arg[2]);
	
	return 0;
}

