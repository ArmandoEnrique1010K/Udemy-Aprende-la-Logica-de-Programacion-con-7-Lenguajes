#include <iostream>

using namespace std;

int main(){
	// Operadores Relacionales  ( Comparacion )
	int a = 5;
	int b = 6;
	cout << "Valor a: " <<  a << endl;
	cout << "Valor b: " <<  b << endl;
	// Operador igualdad
	bool c = a == b;
	cout << "a igual que b? " <<  c << endl;
	// Operador distinto
	c = a != b;
	cout << "a distinto que b? " <<  c << endl;
	// Operador Mayor que
	c = a > b;
	cout << "a mayor que b? " <<  c << endl;
	// Operador Mayor o igual que
	c = a >= b;
	cout << "a mayor o igual que b?  " <<  c << endl;
	// Operador Menor que 
	c = a < b;
	cout << "a menor que b? " <<  c << endl;
	// Operador Menor o igual que
	c = a <= b;
	cout << "a menor o igual que b? " <<  c << endl;
	return 0;
}

