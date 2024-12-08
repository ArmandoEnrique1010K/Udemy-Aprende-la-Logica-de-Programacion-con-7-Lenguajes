Funcion dimension_matriz(renglones Por Referencia, columnas Por Referencia)
	Imprimir 'Proporcione el numero de renglones: '
	Leer renglones
	Imprimir 'Proporcione el numero de columnas: '
	Leer columnas
FinFuncion

Funcion llenado_matriz(matriz, renglones, columnas)
	Para renglon = 0 Hasta renglones - 1 Hacer
		Para columna = 0 Hasta columnas - 1 Hacer
			Imprimir Sin Saltar 'Proporciona el valor: [', renglon, ',', columna, '] = '
			Leer matriz[renglon,columna]
		FinPara
	FinPara
FinFuncion

Funcion imprimir_matriz(matriz, renglones, columnas)
	Imprimir 'Matriz de ', renglones, ' x ', columnas, ': '
	suma_acumulativa = 0
	Para renglon = 0 Hasta renglones -1 Hacer
		Para columna = 0 Hasta columnas - 1 Hacer
			Imprimir Sin Saltar matriz[renglon, columna], ' '
			suma_acumulativa = suma_acumulativa + matriz[renglon, columna]
		FinPara
		Imprimir ''
	FinPara
	Imprimir 'Suma acumulativa de la matriz: ', suma_acumulativa
FinFuncion

Algoritmo EjercicioFuncionesMatrices
	// Solucion utilizando funciones
	// 1. Declaramos la matriz
	Definir renglones, columnas Como Entero
	dimension_matriz(renglones, columnas)
	// Creamos la matriz
	Definir matriz Como Entero
	Dimension matriz[renglones, columnas]
	// 2. Llenado de la matriz
	llenado_matriz(matriz, renglones, columnas)
	// 3. Mostramos la matriz y sumamos sus elementos
	imprimir_matriz(matriz,renglones, columnas)
	
FinAlgoritmo
