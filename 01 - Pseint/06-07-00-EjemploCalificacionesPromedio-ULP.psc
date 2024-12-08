Algoritmo CalificacionesPromedio
	Definir numero_elementos, calificaciones Como Entero
	Imprimir 'Proporciona el tamaño del arreglo: '
	Leer numero_elementos
	// Creamos el arreglo
	Dimension calificaciones[numero_elementos]
	// Solicitamos las calificaciones al usuario
	Para i = 0 Hasta numero_elementos - 1 Hacer
		Imprimir 'Proporciona la calificacion ', i + 1, ': '
		Leer calificaciones[i]
	FinPara
	// Mostramos los elementos
	Para i = 0 Hasta numero_elementos - 1 Hacer
		Imprimir i + 1, '. Valor [', i, '] = ', calificaciones[i]
	FinPara
	// Obtenemos el promedio
	suma_acumulada = 0
	Para i = 0 Hasta numero_elementos - 1 Hacer
		suma_acumulada = suma_acumulada + calificaciones[i]
	FinPara
	// Imprimimos el promedio
	Imprimir 'El promedio de calificaciones es: ', suma_acumulada/numero_elementos
	
	
FinAlgoritmo
