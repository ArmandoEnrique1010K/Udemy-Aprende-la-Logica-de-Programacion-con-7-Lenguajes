Algoritmo LlamadaRecursiva
	// Imprimir del 1 al 5 de manera recursiva
	funcion_recursiva(5)
FinAlgoritmo

Funcion funcion_recursiva(_numero)
	// Caso Base
	Si _numero == 1 Entonces
		Imprimir _numero
	SiNo
		// Llamada recursiva
		funcion_recursiva(_numero - 1)
		Imprimir _numero
	FinSi
FinFuncion
