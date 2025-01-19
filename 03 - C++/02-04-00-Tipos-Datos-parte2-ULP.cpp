#include<iostream>
#include <iomanip>// input/output manipulation

using namespace std;

int main() {
	// 1. Declarar variable y asignar un valor
	int entero = 10;
	cout << "Entero: " << entero <<  endl;
	float flotante = 8.9;
	//cout << "Flotante: " << flotante <<  endl;
	// Modificamos la precision y agregamos la libreria iomanip
	cout << fixed << setprecision(2);
	cout << "Flotante: " << flotante <<  endl;
	
	double doble = 9.99999;
	// Ya no es necesario volver a modificar la precision
	cout << "Double: " << doble <<  endl;
	
	// Tipo char
	char caracter = 'A';
	// Valor en Decimal (ASCII)
	char caracterDecimal = 65;
	cout << "Caracter: " << caracter << endl;
	cout << "Caracter en Decimal: " << caracterDecimal << endl;
	
	// Tipo bool (valores: true o false)
	bool boleano = true; 
	// Imprime 1 para true, 0 para false
	cout << "Boleano: " << boleano << endl;
	
	// Manejo de cadenas (como en C)
	//char cadena1[] = {'H', 'o', 'l', 'a', '\0'};
	char cadena1[] = "Hola";
	cout << "Cadena1: " << cadena1 << endl;
	
	// Cadenas usanso la clase string (tipo especial)
	// Internamente tambien es una arreglo de caracteres
	string cadena2 = "Adios";
	cout << "Cadena2: " << cadena2 << endl;
	
	return 0;
}

