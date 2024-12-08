Algoritmo PotenciaRecursividad
	// Elevar una base a un exponente (potencia)
	// Ej. 2 ^ 3
	base = 2
	exponente = 3
	resultado = potencia(base, exponente)
	Imprimir '2 ^ 3 = ', resultado	
FinAlgoritmo

Funcion retorno <- potencia(base, exponente)
	// Caso base
	Si exponente == 0 Entonces
		retorno = 1
	SiNo
		// Caso recursivo
		retorno = base * potencia(base, exponente - 1)
	FinSi
FinFuncion
