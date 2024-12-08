Algoritmo EjemploMatrices
	// Definimos la matriz
	Definir matriz, renglones, columnas Como Entero
	renglones = 2
	columnas = 3
	Dimension matriz[renglones, columnas]
	// Llenamos la matriz manualmente
	// Llenamos el primer renglon
	matriz[0,0] = 100
	matriz[0,1] = 200
	matriz[0,2] = 300
	// Llenamos el segundo renglon
	matriz[1,0] = 400
	matriz[1,1] = 500
	matriz[1,2] = 600
	// Accedemos a los valores
	Imprimir 'Valor 1 [0,0] = ', matriz[0,0]
	Imprimir 'Valor 6 [1,2] = ', matriz[1,2]
	// Iteramos todos los valores de la matriz
	Imprimir '-----Iteramos la matriz-----'
	
	
FinAlgoritmo
