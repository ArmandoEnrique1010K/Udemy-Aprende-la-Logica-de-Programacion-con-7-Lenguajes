Algoritmo ElMayorDeTresNumeros
	Imprimir 'Proporciona el Numero 1: '
	Leer numero_1
	Imprimir 'Proporciona el Numero 2: '
	Leer numero_2
	Imprimir 'Proporciona el Numero 3: '
	Leer numero_3
	//Revisamos el mayor de los tres numeros
	Si numero_1 > numero_2 Y numero_1 > numero_3  Entonces
		Imprimir 'El numero 1 es mayor: ', numero_1
	SiNo
		Si numero_2 > numero_1 Y numero_2 > numero_3 Entonces
			Imprimir 'El numero 2 es el mayor: ', numero_2
		SiNo
			Imprimir 'El numero 3 es el mayor: ', numero_3
		Fin Si
	Fin Si
	
FinAlgoritmo
