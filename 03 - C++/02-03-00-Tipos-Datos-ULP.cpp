#include <iostream>
#include <iomanip> // input/output manipulation

using namespace std;

int main() {
	// Tipo entero
	int entero = 10;
	cout << "Entero: " << entero << endl;
	// Tipo flotante
	float floante = 8.9;
	cout << fixed << setprecision(2);
	cout << "Flotante: " << floante << endl;
	// Tipo double
	double doble  = 9.9999;
	cout << "Doble: " << doble << endl;
	// Tipo char
	char caracter = 'A';
	char caracterDecimal = 65; // ASCII
	cout << "Caracter: " << caracter << endl;
	cout << "Caracter en Decimal: " << caracterDecimal << endl;
	// Tipo bool
	bool boleano = true; // true-1 o false-0
	cout << "Boleano: " << boleano << endl;
	
	return 0;
}

