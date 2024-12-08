Algoritmo ContarVocales
	Imprimir "Proporciona una cadena: "
	Leer nombre
	//nombre = "Maria Quintero Rojas"
	// Convertimos toda la cadena a minusculas
	nombre = Minusculas(nombre)
	// Definimos las variables que contabilizan las vocales
	contador_a = 0
	contador_e = 0
	contador_i = 0
	contador_o = 0
	contador_u = 0
	// Definimos el arreglo de vocales
	
	Para i = 0 Hasta Longitud(nombre) - 1 Hacer
		_caracter = Subcadena(nombre, i, i) 
		// Revisamos si es una vocal
		Si _caracter == 'a' Entonces
			contador_a = contador_a + 1
		SiNo
			Si _caracter == 'e' Entonces
				contador_e = contador_e + 1
			SiNo
				Si _caracter == 'i' Entonces
					contador_i = contador_i + 1
				SiNo
					Si _caracter == 'o' Entonces
						contador_o = contador_o + 1
					SiNo
						Si _caracter == 'u'
							contador_u = contador_u + 1
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinPara
	// Imprimimos cuantas vocales se encontraron
	Imprimir 'a - ', contador_a
	Imprimir 'e - ', contador_e
	Imprimir 'i - ', contador_i
	Imprimir 'o - ', contador_o
	Imprimir 'u - ', contador_u
	
	
FinAlgoritmo
