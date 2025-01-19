#include <iostream>

using namespace std;

int main() {
	// Concatenacion de Cadenas en C++
	string cadena1 = "Hola", cadena2 = "Mundo";
	string cadena3 = cadena1 + " " + cadena2;
	cout << cadena3 << endl;
	
	// Si son numeros, entonces suma
	int a = 5, b = 3;
	cout << a + b << endl;
	
	// Si son cadenas, concatena
	string c = "10", d = "20";
	cout << c + d << endl;
	
	return 0;
}
