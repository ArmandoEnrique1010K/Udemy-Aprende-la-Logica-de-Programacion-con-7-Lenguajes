#include <iostream>

using namespace std;

int main() {
	// Operadores Logicos
	bool a = true;// Verdadero -> 1
	bool b = false;// Falso -> 0
	cout << "Valor a: " <<  a << endl ;
	cout << "Valor b: " <<  b << endl ;
	// Operador Logico &&  ( and o Y ) 
	// Regresar verdadero si ambos operandos son verdaderos
	bool c = a && b;
	cout << "Resultado operador and: " <<  c << endl ;
	// Operador Logico ||  ( or o O ) 
	// Regresa verdadero si cualquiera de los operandos es verdadero
	c = a || b;
	cout << "Resultado operador or: " <<  c << endl ;
	// Operador Logico !  ( Not o NO ) 
	// Invierte el valor original ( de 1 a 0  o de 0 a 1 )
	c = !a;
	cout << "Resultado operador not: " <<  c << endl ;
	
	return 0;
}

