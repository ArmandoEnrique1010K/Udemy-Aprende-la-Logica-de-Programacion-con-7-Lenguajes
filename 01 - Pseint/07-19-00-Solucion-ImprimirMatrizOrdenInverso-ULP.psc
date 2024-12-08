Algoritmo ImprimirMatrizOrdenInverso
	// Realizar la impresion de la matriz en orden Inverso
	// 1. Crear matriz
	Definir no_renglones, no_columnas Como Entero
	no_renglones = 2
	no_columnas = 3
	Definir matriz Como Entero
	Dimension matriz[no_renglones, no_columnas]
	// Llenar los valores 
	matriz[0,0] = 3
	matriz[0,1] = -8
	matriz[0,2] = 6
	matriz[1,0] = 5
	matriz[1,1] = 2
	matriz[1,2] = -4
	// Matriz en orden original
	// Iteramos la matriz pero en orden inverso
	Imprimir 'Matriz original: '
	Para renglon = 0 Hasta no_renglones - 1 Hacer
		Para columna = 0 Hasta no_columnas - 1 Hacer
			Imprimir Sin Saltar '[', renglon, ', ', columna, '] = ', matriz[renglon, columna], ' '
		FinPara
		Imprimir ''
	FinPara
	Imprimir ''
	Imprimir 'Matriz en orden inverso: '
	// Iteramos la matriz pero en orden inverso
	// Empezamos por el ultimo renglon hasta el primero
	Para renglon = no_renglones - 1 Hasta 0 Hacer
		// Empezamos por la ultima columna hasta la primera 
		// del ultimo renglon (controlado por el ciclo externo)
		Para columna = no_columnas - 1 Hasta 0 Hacer
			Imprimir Sin Saltar '[', renglon, ', ', columna, '] = ', matriz[renglon, columna], ' '
		FinPara
		Imprimir ''
	FinPara
FinAlgoritmo
