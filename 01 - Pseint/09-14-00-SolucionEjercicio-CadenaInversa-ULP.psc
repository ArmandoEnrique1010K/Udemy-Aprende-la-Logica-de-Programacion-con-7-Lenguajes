Algoritmo ImprimirAlReves
	Imprimir "Proporciona una cadena: "
	Leer _cadena
	// Recorremos de manera inversa la cadena
	Para i = Longitud(_cadena) - 1 Hasta 0 Hacer
		_caracter = Subcadena(_cadena, i, i)
		Imprimir Sin Saltar _caracter
	FinPara
	Imprimir ''
	
FinAlgoritmo
