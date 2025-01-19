#include <iostream>


using namespace std;

int main(){  
	int numero, numeroAbs;
	printf("Proporciona un valor numerico: ");
	cin >> numero;
	numeroAbs = abs(numero);
	cout << "Valor absoluto de " << numero << " es: " << numeroAbs;
	
	return 0;
}
	
