#include<iostream>

using namespace std;

int main() {
	// sizeof
	int entero = 10;
	float flotante = 2.8;
	double doble = 6.999;
	char caracter = 'A';
	bool boleano = false;
	string cadena = "Hola";
	// Imprimir cada variable (tamanio bytes)
	cout << "int tamanio bytes: " << sizeof(entero) << endl;
	cout << "float tamanio bytes: " << sizeof(flotante) << endl;
	cout << "double tamanio bytes: " << sizeof(doble) << endl;
	cout << "char tamanio bytes: " << sizeof(caracter) << endl;
	cout << "bool tamanio bytes: " << sizeof(boleano) << endl;
	cout << "cadena tamanio bytes: " << sizeof(cadena) << endl;
	cout << "cadena tamanio length: " << cadena.length() << endl;
	cout << "cadena tamanio size: " << cadena.size() << endl;
	
	return 0;
}

