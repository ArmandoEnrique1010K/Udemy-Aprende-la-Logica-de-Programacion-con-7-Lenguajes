#include <iostream>


using namespace std;

int main(){  
	// Redeondeo y truncado en C++
	float numero;
	int redondeo, truncado;
	numero = 8.5;
	// round -> Mayor .5 redondea hacia arriba
	redondeo = round(numero);
	cout << "Valor " << numero << " redondeado " << redondeo << endl;
	// trunc -> Omite la parte flotante y solo toma la parte entera
	truncado = trunc(numero);
	cout << "Valor " << numero << " truncado " << truncado << endl;
	
	return 0;
}
