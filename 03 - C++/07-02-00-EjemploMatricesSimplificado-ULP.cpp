#include <iostream>
using namespace std;

int main() {
	// Definimos las constantes
	const int RENGLONES = 2;
	const int COLUMNAS = 3;
	// Definimos matriz
	//int matriz[RENGLONES][COLUMNAS] = {100,200,300,400,500,600};
	int matriz[RENGLONES][COLUMNAS] = {
		{100, 200, 300}, // Primer renglon
	{400, 500, 600} // Segundo renglon
	};
	
	// Acceder a los elementos
	cout << "Valor 1 [0][0] = " << matriz[0][0] << endl;
	cout << "Valor 6 [1][2] = " << matriz[1][2] << endl;
	
	return 0;
}

