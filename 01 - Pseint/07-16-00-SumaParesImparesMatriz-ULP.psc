Algoritmo SumaParesImparesMatriz
	// Realizar la suma de los numeros pares e impares
	// de una matriz
	// 1. Crear la matriz
	Definir no_renglones, no_columnas Como Entero
	no_renglones = 2
	no_columnas = 3
	Definir matriz Como Entero
	Dimension matriz[no_renglones, no_columnas]
	// 2. Llenamos los valores manualmente
	matriz[0,0] = 3
	matriz[0,1] = -5
	matriz[0,2] = 9
	matriz[1,0] = 6
	matriz[1,1] = 7
	matriz[1,2] = 2
	// 3. Iteramos la matriz
	suma_pares = 0
	suma_impares = 0
	Para renglon = 0 Hasta no_renglones - 1 Hacer
		Para columna = 0 Hasta no_columnas - 1 Hacer
			// 4. Revisamos si es un numero par o impar
			valor = matriz[renglon,columna]
			Si valor MOD 2 == 0 Entonces
				suma_pares = suma_pares + valor
			SiNo
				suma_impares = suma_impares + valor
			FinSi
		FinPara
	FinPara
	Imprimir 'Suma numeros pares de la matriz: ', suma_pares
	Imprimir 'Suma numeros impares de la matriz: ', suma_impares
	
	
FinAlgoritmo
