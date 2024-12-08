Algoritmo SumaDiagonalMatriz
	// Sumar la diagonal de una matriz de 3 x 3
	// 1. Definimos la matriz
	Definir matriz Como Entero
	Dimension matriz[3,3]
	// 2. Llenamos los valores manualmente
	matriz[0,0] = 5
	matriz[0,1] = 7
	matriz[0,2] = 2
	matriz[1,0] = 3
	matriz[1,1] = 8
	matriz[1,2] = 4
	matriz[2,0] = 1
	matriz[2,1] = 7
	matriz[2,2] = 9
	// 3. Iteramos la matriz
	suma_diagonal = 0
	Para renglon = 0 Hasta 2 Hacer
		Para columna = 0 Hasta 2 Hacer
			// 4. Imprimimos la matriz
			Imprimir Sin Saltar matriz[renglon,columna], ' '
			// 5. Revisamos si los indices son iguales
			Si renglon == columna Entonces
				suma_diagonal = suma_diagonal + matriz[renglon,columna]
			FinSi
		FinPara
		Imprimir ''
	FinPara
	// 6. Imprimimos el valor de la suma
	Imprimir 'La suma de la diagonal es: ', suma_diagonal
	
FinAlgoritmo
