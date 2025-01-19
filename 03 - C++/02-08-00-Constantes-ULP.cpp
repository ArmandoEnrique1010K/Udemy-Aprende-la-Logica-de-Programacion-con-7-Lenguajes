#include <iostream>
using namespace std;
//#define _USE_MATH_DEFINES
#include <cmath>

int main() {
	// Definir constantes en C
	const int MI_CONSTANTE = 10;
	//MI_CONSTANTE = 20; // read-only -> solo lectura
	const float PI = 3.14;
	cout << "Mi constante: " << MI_CONSTANTE << endl;
	cout << "Constante PI: " << PI << endl;
	cout << "Constante matematica PI: " << M_PI << endl;
	
	// Constante segundos por minuto
	const int SEGUNDOS_POR_MINUTO = 60;
	cout << "Constante Segundos por Minuto: " << SEGUNDOS_POR_MINUTO << endl;

	return 0;
}

