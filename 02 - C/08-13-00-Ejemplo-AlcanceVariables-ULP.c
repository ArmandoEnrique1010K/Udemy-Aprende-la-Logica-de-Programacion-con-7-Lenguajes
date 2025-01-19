#include<stdio.h>

// Variables globales
int variableGlobal = 5;
int a = 10;

// Definimos metodo cambio
void cambio(int variableLocalFuncion){
	// Cambiamos el valor de la variableLocalFuncion
	variableLocalFuncion = 40;
}

int main() {
	// Ejercicio Alcance Variables
	int variableLocal = 20;
	// Accedemos a la variable global
	printf("Variable global a (principal): %d\n", a);
	// Modificar la variable global
	a = 30;
	// Llamamos la funcion de cambio
	cambio(variableLocal);
	printf("Variable local (principal): %d\n", variableLocal);
	printf("Variable global a (principal): %d\n", a);
	printf("Variable global (principal): %d", variableGlobal);
	
	return 0;
}

