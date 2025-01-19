#include<stdio.h>
#include<math.h>

int main() {
	float numero;
	int redondeado, truncado;
	// Redondeo de numero
	numero = 8.6;
	// round -> Mayor a .5 redondea hacia arriba
	redondeado = round(numero);
	printf("Valor %.2f redondeado = %d\n", numero, redondeado);
	truncado = trunc(numero);
	printf("Valor %.2f truncado = %d\n", numero, truncado);
	return 0;
}

