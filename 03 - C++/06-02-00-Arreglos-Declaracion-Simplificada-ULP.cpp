#include <iostream>
using namespace std;

int main() {
	// Declaramos el arreglo
	int numerosArreglo[5];
	
	// Modificamos los valores
	numerosArreglo[0] = 13;
	numerosArreglo[1] = 21;
	numerosArreglo[4] = 62;
	
	// Imprimimos los valores
	cout << "Valor 1 Arreglo[0] = " << numerosArreglo[0] << endl;
	cout << "Valor 2 Arreglo[1] = " << numerosArreglo[1] << endl;
	cout << "Valor 3 Arreglo[2] = " << numerosArreglo[2] << endl;
	cout << "Valor 4 Arreglo[3] = " << numerosArreglo[3] << endl;
	cout << "Valor 5 Arreglo[4] = " << numerosArreglo[4] << endl;
	
	// Declaramos el arreglo usando sintaxis simplificada
	int numeros[] = {100, 200, 300, 400};
	cout << "Valor 1 Numero[0] = " << numeros[0] << endl;
	cout << "Valor 2 Numero[1] = " << numeros[1] << endl;
	cout << "Valor 7 Numero[6] = " << numeros[6] << endl;
	
	
	
	
	return 0;
}

