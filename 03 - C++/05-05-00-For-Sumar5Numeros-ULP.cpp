#include <iostream>
using namespace std;

int main() {
	
	// Sumar los primeros 5 numeros
	int maximo = 5, acumuladorSuma = 0;
	
	//Iteramos los valores
	for (int numero = 1; numero <= maximo ; numero++){
		// Imprimimos lo que se va a sumar
		cout << "(acumuladorSuma + numero) -> " 
			<< acumuladorSuma << " + " << numero << endl;
		
		// acumuladorSuma = acumuladorSuma + numero
		acumuladorSuma += numero;
		
		// Imprimimos el resultado parcial
		cout << "Suma parcial acumulada: " << acumuladorSuma << endl;
		cout << endl;
	}
	cout << "La suma de los primeros 5 numeros es: " << acumuladorSuma << endl;
	
	return 0;  
}

