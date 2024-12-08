Algoritmo CalculoTerreno
	// 1. Definicion de variables
	Definir ancho,largo,precio_m2,area,precio_total Como Real
	// 2. Leemos la informacion del usuario
	Escribir 'Programa para calcular el precio de un terreno'
	Escribir 'Escriba el ancho del terreno (metros): '
	//Ej. 10 m
	Leer ancho
	Escribir 'Escriba el largo del terreno (metros): '
	//Ej. 15 m
	Leer largo
	Escribir 'Escriba el precio por metro cuadrado: '
	//Ej. 500 usd
	Leer precio_m2
	// 3. Calculo del programa
	area = ancho * largo
	precio_total = area * precio_m2
	// 4. Impresion del resultado
	Escribir 'Area del terreno: ', area
	Escribir 'Precio del terreno: ', precio_total
FinAlgoritmo
