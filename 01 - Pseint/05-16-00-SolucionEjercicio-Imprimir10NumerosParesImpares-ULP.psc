Algoritmo CicloPara
	// Imprimir los primeros 10 numeros pares y los primeros 10 numeros impares en el mismo ciclo
	Definir numero Como Entero
	Para numero = 0 Hasta 10 Con Paso 1 Hacer
		Si numero MOD 2 == 0 Entonces
			Imprimir 'Numero par: ', numero
		SiNo
			Imprimir 'Numero impar: ', numero
		FinSi
	Fin Para
FinAlgoritmo
