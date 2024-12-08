Algoritmo CalculoAreaPerimetroRectangulo
	// 1. Solicitamos los valores al usuario
	Imprimir 'Proporcione la base del rectangulo: '
	Leer base
	Imprimir 'Proporcione la altura del rectangulo'
	Leer altura
	// 2. Calculo del area del rectangulo
	area = base * altura
	// 3. Calculo del perimetro del rectangulo
	perimetro = 2 * (base + altura)
	// 4. Impresion de resultados
	Imprimir 'Area del rectangulo: ', area
	Imprimir 'Petrimetro del rectangulo: ', perimetro
FinAlgoritmo