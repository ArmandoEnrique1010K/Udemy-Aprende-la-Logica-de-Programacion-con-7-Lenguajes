#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Operadores Aritmeticos
	int a, b, c, e, f;
	float d;
	// Suma +
	a = 3 + 4;
	cout << "Suma: " << a << endl;
	// Resta -
	b = 6 - 2;
	cout << "Resta: " << b << endl;
	// Multiplicacion *
	c = a * 2;
	cout << "Multiplicacion: " << c << endl;
	// Division
	d = b / 2.5;
	cout << "Division: " << d << endl;
	// Modulo (residuo division)
	f = 9 % 2;
	cout << "Residuo Division: " << f << endl;
	// Potencia
	e = pow(a, 2);
	cout << "Potencia: " << e << endl;	
	
	return 0;
}

