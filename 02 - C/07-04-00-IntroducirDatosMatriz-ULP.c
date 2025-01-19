#include <stdio.h>

int main() {
	int renglones, columnas;
	// Introducir valores a una matriz
	printf("Proporciona el numero de renglones: ");
	scanf("%d", &renglones);
	printf("Proporciona el numero de columnas:");
	scanf("%d", &columnas);
	
	// Creamos la matriz
	int matriz[renglones][columnas];
	// Introducir los valores de la matriz
	for(int renglon=0 ; renglon < renglones ; renglon++){
		for(int columna=0 ; columna < columnas ; columna++){
			printf("Dato[%d][%d]=",renglon,columna);
			scanf("%d", &matriz[renglon][columna]);
		}
	}
	// Recorrer la matriz
	printf("\nValores de la Matriz: \n");
	for(int renglon=0 ; renglon < renglones ; renglon++){
		for(int columna=0 ; columna < columnas ; columna++){
			printf("\nDato[%d][%d]=%d",renglon,columna, matriz[renglon][columna]);
		}
		printf("\n");
	}
	
	return 0;
}

