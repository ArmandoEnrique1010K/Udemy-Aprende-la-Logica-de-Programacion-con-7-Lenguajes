#include <iostream>
using namespace std;

// Definimos la funcion suma
int sumar(int a, int b) {
	int resultadoSuma = a + b;
	return resultadoSuma;
}

int main() {
	int argA, argB, resultado;
	// Solicitamos los valores de los argumentos
	cout << "Proporciona el valor del primer argumento: ";
	cin >> argA;
	cout << "Proporciona el valor del segundo argumento: ";
	cin >> argB;
	// Llamamos a la funcion sumar
	resultado = sumar(argA,argB);
	//cout << "Resultado de la suma: " << resultado;
	cout << "Resultado de la suma: " << sumar(argA, argB);
	
	return 0;
}

