#include<stdio.h>

// Definimos la funcion suma
int sumar(int a, int b) {
	int resultadoSuma = a + b;
	return resultadoSuma;
}

int main() {
	int argA, argB, resultado;
	// Solicitamos los valores de los argumentos
	printf("Proporciona el valor del primer argumento: \n");
	scanf("%d", &argA);
	printf("Proporciona el valor del segundo argumento: \n");
	scanf("%d", &argB);
	// Llamamos a la funcion sumar
	resultado = sumar(argA,argB);
	printf("Resultado de la suma: %d\n",resultado);
	
	return 0;
}

