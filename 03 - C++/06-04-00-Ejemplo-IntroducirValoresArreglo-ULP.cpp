#include <iostream>
using namespace std;

int main() {
	// Declaramos el arreglo
	//const int largoArreglo = 5;
	cout << "Proporciona el largo del arreglo: " ;
	int largoArreglo;
	cin >> largoArreglo;
	
	//int numerosArreglo[largoArreglo];
	int *numerosArreglo = new int[largoArreglo]; 
	
	// Iterar los elementos del arreglo
	cout << "Valor largoArreglo = " << largoArreglo << endl;
	for(int i=0; i < largoArreglo; i++){
		cout << "Valor[" << i << "] = " << numerosArreglo[i] << endl;
	}
	
	return 0;
}

