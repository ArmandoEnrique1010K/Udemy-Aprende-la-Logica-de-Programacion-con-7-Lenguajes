#include <iostream>
using namespace std;

int main() {
	// Algoritmo dia de la semana
	int diaSemana;
	cout << "Proporciona  el dia de la semana: " << endl;
	cin >> diaSemana;
	
	// Revisar que dia de la semana es
	if (diaSemana == 1)
		cout << "Lunes" << endl;
	else if (diaSemana == 2)
		cout << "Martes" << endl;
	else if (diaSemana == 3 )
		cout << "Miercoles" << endl;
	else if (diaSemana == 4)
		cout << "Jueves" << endl;
	else if (diaSemana == 5)
		cout << "Viernes" << endl;
	else if (diaSemana == 6)
		cout << "Sabado" << endl;
	else if (diaSemana == 7)
		cout << "Domingo" << endl;
	else 
		cout << "Valor de dia erroneo: " << diaSemana << endl;
	
	return 0;  
}

