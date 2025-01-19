#include <stdio.h>
#include <math.h>
int main() {
	// Operadores Aritmeticos
	int a, b, c, e, f;
	float d;
	// Suma +
	a = 3 + 4;
	printf("Suma: %d", a);
	// Resta -
	b = 6 - 2;
	printf("\nResta: %d", b);
	// Multiplicacion *
	c = a * 2;
	printf("\nMultiplicacion: %d", c);
	// Division
	d = b / 2.5;
	printf("\nDivision: %.2f", d);
	// Modulo (residuo division)
	f = 9 % 2;
	printf("\nResiduo Division: %d", f);
	// Potencia
	e = pow(a, 2);
	printf("\nPotencia: %d", e);
	
	return 0;
}

