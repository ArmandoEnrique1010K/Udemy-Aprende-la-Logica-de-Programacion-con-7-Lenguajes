#include <stdio.h>
#define PI 3.1416 
#include <math.h>

int main() {
	// 1. Definir constantes en C
	const int MI_CONSTANTE = 10;
	//MI_CONSTANTE = 20;
	printf("Valor constante = %d", MI_CONSTANTE);
	printf("\nValor PI = %.4f", PI);
	printf("\nValor PI Math = %f", M_PI);
	
	// Constante Segundos por minuto
	const int SEGUNDOS_POR_MINUTO = 60;
	printf("\nConstante SEGUNDOS_POR_MINUTO = %d", SEGUNDOS_POR_MINUTO);
	return 0;
}

