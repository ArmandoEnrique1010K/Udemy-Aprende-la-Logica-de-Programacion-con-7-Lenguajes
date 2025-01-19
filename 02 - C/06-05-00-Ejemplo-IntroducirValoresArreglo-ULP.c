#include<stdio.h>

int main() {
	/* Programa que pedira al usuario los valores del arreglo */
	int numeroElementos;
	/* Solicitamos cuantos numeros queremos proporcionar */
	printf("Proporciona el tamaño del arreglo: ");
	scanf("%d",&numeroElementos);
	// Creamos el arreglo
	int numeros[numeroElementos];
	/* Solicitamos los numeros al usuario */
	for (int i=0 ; i <= numeroElementos-1; i++) {
		printf("Proporciona el valor %d del arreglo: ", i+1);
		scanf("%d",&numeros[i]);
	}
	/* Mostramos los elementos */
	printf("Estos son los valores almacenados en el arreglo.\n");
	for (int i=0 ; i <= numeroElementos-1 ; i++) {
		printf("Valor [%d] = %d\n",i,numeros[i]);
	}
	return 0;
}

