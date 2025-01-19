#include <stdio.h>

int main() {
	int a, b, c;
	// Operadores de Incremento: Pre-incremento y Post-incremento
	a = 0;
	// Post-incremento
	a++;//Se incrementa la proxima vez que utilicemos esta variable
	printf("Nuevo valor de a: %d", a);
	// Pre-incremento
	++a;
	printf("\nNuevo valor de a: %d", a);
	// ejemplo
	a = 5;
	b = 2;
	c = ++a * b++;
	printf("\nValor a: %d", a);// No tenia pendiente ningun incremento
	printf("\nValor b: %d", b);// Si tenia pendiente un incremento
	printf("\nValor c: %d", c);
	
	// Operador decremento: Pre-decremento y Post-decremento
	a = 5;
	b = 2;
	c = --a * b--;
	printf("\nValor a: %d", a);
	printf("\nValor b: %d", b);
	printf("\nValor c: %d", c);
}

