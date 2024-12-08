Algoritmo CalcularMultiplicacionParesImpares
	// Calcular la multiplicacion de los numeros pares e impares de 1 a 6 en el mismo ciclo
	// Ej. Multiplicacion pares de 1 a 6: 2*4*6=48
	// Ej. Multiplicacion impares de 1 a 6: 1*3*5=15
	Definir numero_var, mul_pares, mul_impares Como Entero
	// Iniciamos los valores en 1
	mul_pares = 1
	mul_impares = 1
	// No podemos comenzar en 0, por que la mutiplicacion seria igual a 0
	Para numero_var = 1 Hasta 6 Con Paso 1 Hacer
		Si numero_var MOD 2 == 0 Entonces
			Imprimir '(mul_pares * numero_var): ', mul_pares, ' * ', numero_var 
			mul_pares = mul_pares * numero_var
			Imprimir 'Multiplicacion pares parcial: ', mul_pares
		SiNo
			Imprimir '(mul_impares * numero_var): ', mul_impares, ' * ', numero_var 
			mul_impares = mul_impares * numero_var
			Imprimir 'Multiplicacion impares parcial: ', mul_impares
		FinSi
	FinPara
	Imprimir 'Multiplicacion final numeros pares de 1 a 6: ', mul_pares
	Imprimir 'Multiplicacion final numeros impares de 1 a 6: ', mul_impares
	
FinAlgoritmo
