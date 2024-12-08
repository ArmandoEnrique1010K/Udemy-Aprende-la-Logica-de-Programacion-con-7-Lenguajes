Algoritmo EjercicioFuncionesMatrices
	//Solucion sin Funciones
	// 1. Declaramos la matriz
	Imprimir 'Proporcione el numero de renglones: '
	Leer renglones
	Imprimir 'Proporcione el numero de columnas: '
	Leer columnas
	// Creamos la matriz
	Definir matriz Como Entero
	Dimension matriz[renglones, columnas]
	// 2. LLenado de la matriz
	Para renglon = 0 Hasta renglones - 1 Hacer
		Para columna = 0 Hasta columnas - 1 Hacer
			Imprimir Sin Saltar 'Proporciona el valor: [', renglon, ',', columna, '] = '
			Leer matriz[renglon, columna]
		FinPara
	FinPara
	// 3. Suma Elementos de la matriz
	Imprimir 'Matriz de ', renglones, ' x ', columnas, ': '
	suma_acumulativa = 0 
	Para renglon = 0 Hasta renglones - 1 Hacer
		Para columna = 0 Hasta columnas - 1 Hacer
			Imprimir Sin Saltar matriz[renglon, columna], ' '
			suma_acumulativa = suma_acumulativa + matriz[renglon, columna]
		FinPara
		Imprimir ''
	FinPara
	Imprimir 'Suma acumulativa de la matriz: ', suma_acumulativa
	
FinAlgoritmo
