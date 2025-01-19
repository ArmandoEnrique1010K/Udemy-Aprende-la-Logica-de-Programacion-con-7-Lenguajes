#include<stdio.h>

int main() {
	int diaSemana;
	printf("Proporciona el dia de la semana: \n");
	scanf("%d", &diaSemana);
	// Revisamos que dia de la semana es
	if (diaSemana == 1) 
		printf("Lunes\n");
	else if (diaSemana == 2)
		printf("Martes\n");
	else if (diaSemana == 3)
		printf("Miercoles\n");
	else if (diaSemana == 4)
		printf("Jueves\n");
	else if (diaSemana == 5)
		printf("Viernes\n");
	else if (diaSemana == 6)
		printf("Sabado\n");
	else if (diaSemana == 7)
		printf("Domingo\n");
	else
		printf("Valor de dia erroneo: %d\n",diaSemana);
	
	return 0;
}

