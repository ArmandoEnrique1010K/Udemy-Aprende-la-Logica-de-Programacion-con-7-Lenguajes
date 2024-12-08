Algoritmo MayorMenorMatriz
	// Encontrar el numero mayor y menor en una matriz
	// Imprimir tanto la posicion como el valor
	// 1. Crear matriz
	Definir no_renglones, no_columnas Como Entero
	no_renglones = 3
	no_columnas = 3
	Definir matriz Como Entero
	Dimension matriz[no_renglones, no_columnas]
	// 2. Llenamos la matriz
	matriz[0,0] = 6
	matriz[0,1] = 9
	matriz[0,2] = 8
	matriz[1,0] = 2
	matriz[1,1] = -1
	matriz[1,2] = -12
	matriz[2,0] = 14
	matriz[2,1] = 31
	matriz[2,2] = 18
	// Iteramos la matriz
	mayor = 0
	posicion_renglon_mayor = 0
	posicion_columna_mayor = 0
	menor = 0
	posicion_renglon_menor = 0
	posicion_columna_menor = 0
	Imprimir 'Matriz:'
	Para renglon = 0 Hasta no_renglones - 1 Hacer
		Para columna = 0 Hasta no_columnas - 1 Hacer
			Si matriz[renglon, columna] > mayor Entonces
				mayor = matriz[renglon, columna]
				posicion_renglon_mayor = renglon
				posicion_columna_mayor = columna
			SiNo
				Si matriz[renglon,columna] < menor Entonces
					menor = matriz[renglon, columna]
					posicion_renglon_menor = renglon
					posicion_columna_menor = columna
				FinSi
			FinSi
			Imprimir Sin Saltar matriz[renglon, columna], ' '
		FinPara
		Imprimir ''
	FinPara
	Imprimir 'Valor Mayor y Menor en la Matriz: '
	Imprimir '[', posicion_renglon_mayor, ',', posicion_columna_mayor, '] = ', mayor
	Imprimir '[', posicion_renglon_menor, ',', posicion_columna_menor, '] = ', menor  
	
FinAlgoritmo
