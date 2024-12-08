Algoritmo CaracteresCadena
	// Imprimir cada caracter de una cadena
	Imprimir "Proporciona una cadena: "
	Leer _cadena
	// Iterar cada caracter de la cadena
	Para i = 0 Hasta Longitud(_cadena) - 1 Hacer
		_caracter = Subcadena(_cadena, i , i)
		Imprimir i, " - ", _caracter
	FinPara
FinAlgoritmo
