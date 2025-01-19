#include <iostream>
using namespace std;

int main() {
	// Ciclo while
	int contador = 0, repeticiones = 5;
	// Ciclo while
	while (contador < repeticiones){
		cout << "Buenos dias... " << contador << endl;
		contador++;
		// Condicion a evaluar
		bool condicion = contador < repeticiones;
		cout << contador << " < " << repeticiones << " -> " << condicion << endl; 
		cout << endl;
	}
	cout << "Ya estamos fuera del ciclo while" << endl;
	
	return 0;  
}

