#include <iostream>

using namespace std;

int main() {
	// Definimos variables
	int minimo = 0, maximo = 5;
	// Solicitamos un valor entre 0 y 5
	int dato;
	cout << "Proporciona un dato entre 0 y 5: " << endl;
	cin >> dato; 
	// Verificamos si el dato esta dentro de rango
	bool dentroRango = dato >= minimo && dato <= maximo;
	cout << "Valor dentro de rango? " << dentroRango << endl;
	
	return 0;
}

