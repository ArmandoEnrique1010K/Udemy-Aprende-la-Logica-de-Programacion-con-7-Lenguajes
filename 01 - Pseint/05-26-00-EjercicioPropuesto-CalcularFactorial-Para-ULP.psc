Algoritmo FactorialNumero
	// Calcular el factorial de un numero positivo, ej. 5! (Cinco Factorial)
	// El factorial se calcula con la multiplicacion de los numeros naturales anteriores o iguales
	// Factorial de 0! = 1
	// 5! = 5*4*3*2*1 = 120
	Definir numero_var, factorial_resultado, factorial Como Entero
	factorial = 5
	numero_var = 1
	factorial_resultado = 1
	Para numero_var = 1 Hasta factorial Con Paso 1 Hacer
	//Para numero_var = factorial Hasta 1 Con Paso -1 Hacer
		Imprimir '(factorial parcial * numero_var) = ', factorial_resultado, ' * ', numero_var
		factorial_resultado = factorial_resultado * numero_var
		Imprimir 'Resultado parcial factorial = ', factorial_resultado
	FinPara
	Imprimir 'Factorial de ', factorial, '! es = ', factorial_resultado 
FinAlgoritmo