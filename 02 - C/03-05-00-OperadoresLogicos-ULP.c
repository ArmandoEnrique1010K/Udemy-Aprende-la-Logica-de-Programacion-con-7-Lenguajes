#include <stdio.h>
#include <stdbool.h>

int main() {
	// Operadores Logicos
	bool a = true;// Verdadero - 1
	bool b = false;// Falso - 0
	printf("Valor a: %d", a);
	printf("\nValor b: %d", b);
	// Operador Logico && (and o Y)
	// Regresar verdadero si ambos operandos son verdaderos
	bool c = a && b;
	printf("\nResultado operador and: %d", c);
	// Operador Logico || (or o O)
	// Regresa verdadero si cualquiera de los operandos es verdadero
	c = a || b;
	printf("\nResultado operador or: %d", c);
	// Operador Logico ! (Not o NO)
	// Invierte el valor original, de 1 a 0, o de 0 a 1
	c = !a;
	printf("\nResultado operador not: %d", c);
	
	return 0;
}

