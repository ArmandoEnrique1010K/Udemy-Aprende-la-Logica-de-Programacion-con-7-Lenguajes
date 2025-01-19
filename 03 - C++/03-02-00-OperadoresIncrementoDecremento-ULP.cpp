#include <iostream>

using namespace std;

int main() {
	// Operadores Incremento
	int a = 0, b, c;
	// Operador post-incremento
	a++; // Se incrementa la proxima vez que se use
	cout << "Nuevo valor de a (a++): " << a << endl;
	// Operador pre-incremento
	++a;
	cout << "Nuevo valor de a (++a): " << a << endl; 
	
	// Operadores Decremento
	// Post-decremento
	a--;
	cout << "Nuevo valor de a (a--): " << a << endl;
	// Pre-decremento
	--a;
	cout << "Nuevo valor de a (--a): " << a << endl;
	
	
	
	return 0;
}

