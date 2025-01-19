#include <iostream>
using namespace std;

int main() {
	// do-while
	int numero;
	do {
		cout << "Proporciona un valor positivo: " << endl;
		cin >> numero;
	} while( numero <= 0 );
	cout << "Valor positivo: " << numero << endl;
	
	return 0;  
}

