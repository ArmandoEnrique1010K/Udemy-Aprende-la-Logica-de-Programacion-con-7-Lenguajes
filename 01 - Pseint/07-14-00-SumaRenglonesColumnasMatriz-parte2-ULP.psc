Algoritmo SumaRenglonesColumnasMatriz
	// Realizar la suma de Renglones y Columnas de una Matriz
	// 1. Crear la matriz
	Definir no_renglones, no_columnas Como Entero
	no_renglones = 2
	no_columnas = 3
	Definir matriz, renglones, columnas Como Entero
	Dimension matriz[no_renglones,no_columnas]
	// El arreglo de renglones tiene 2 valores
	Dimension renglones[no_renglones]
	// El arreglo columnas tiene 3 valores
	Dimension columnas[no_columnas]
	//2. Llenamos los valores manualmente
	matriz[0,0] = 3
	matriz[0,1] = -8
	matriz[0,2] = 6
	matriz[1,0] = 5
	matriz[1,1] = 2
	matriz[1,2] = -4
	//3. Iteramos la matriz
	suma_renglon = 0
	// 4. Obtenemos el arreglo de la suma renglones
	Para renglon = 0 Hasta no_renglones - 1 Hacer
		Para columna = 0 Hasta no_columnas - 1 Hacer
			// Sumamos los valores de los renglones
			suma_renglon = suma_renglon + matriz[renglon,columna]
		FinPara
		// Ya tenemos la suma completa del renglon iterado
		// agregamos la suma al arreglo
		renglones[renglon] = suma_renglon
		// reiniciamos la suma renglon para prepararlo 
		// para la siguiente iteracion del renglon 
		suma_renglon = 0
	FinPara
	Imprimir 'Arreglo de Suma de Renglones: '
	Para indice = 0 Hasta no_renglones - 1 Hacer
		Imprimir Sin Saltar renglones[indice], ' '
	FinPara
	// 5. Obtenemos el arreglo de la suma de columnas
	// El practicamente lo mismo pero ahora iteramos 
	// primero las columnas y de manera interna los renglones
	// es decir, ahora la columna es el pivote 
	suma_columna = 0
	Para columna = 0 Hasta no_columnas - 1 Hacer
		Para renglon = 0 Hasta no_renglones - 1 Hacer
			// Sumamos los valores de las columnas 
			suma_columna = suma_columna + matriz[renglon,columna]
		FinPara
		// Ya tenemos la suma completa de la columna iterada
		// agregamos la suma al arreglo
		columnas[columna] = suma_columna
		// reiniciamos la suma columna para prepararlo 
		// para la siguiente iteracion del renglon 
		suma_columna = 0
	FinPara
	Imprimir ''
	Imprimir 'Arreglo de Suma de Columnas: '
	Para indice = 0 Hasta no_columnas - 1 Hacer
		Imprimir Sin Saltar columnas[indice], ' '
	FinPara
	Imprimir ''
	
FinAlgoritmo
