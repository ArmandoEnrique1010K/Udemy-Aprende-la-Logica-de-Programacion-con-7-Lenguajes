Algoritmo ConteoPositivosNegativosNeutros
	//Algoritmo para contar cuantos valores positivos, negativos y neutros(0)
	//Pedimos el numero de elementos del arreglo
	Imprimir 'Proporciona el numero de elementos del arreglo: '
	Leer numero_elementos
	// Definimos el arreglo
	Definir arreglo Como Entero
	Dimension arreglo[numero_elementos]
	//Pedimos los valores al usuario
	Para i = 0 Hasta numero_elementos - 1 Hacer
		Imprimir 'Proporciona el valor ', i + 1, ' del arreglo: '
		Leer arreglo[i]
	FinPara
	// Contamos cuantos valores son positivos, cuantos negativos y cuantos neutros
	positivos = 0
	negativos = 0
	neutros = 0
	Para i = 0 Hasta numero_elementos - 1 Hacer
		Si arreglo[i] > 0 Entonces
			positivos = positivos + 1
		SiNo
			Si arreglo[i] < 0 Entonces
				negativos = negativos + 1
			SiNo
				neutros = neutros + 1
			FinSi
		FinSi
	FinPara
	// Imprimimos los valores
	Imprimir 'Total Positivos: ', positivos
	Imprimir 'Total Negativos: ', negativos
	Imprimir 'Total Neutros (0): ', neutros
FinAlgoritmo
