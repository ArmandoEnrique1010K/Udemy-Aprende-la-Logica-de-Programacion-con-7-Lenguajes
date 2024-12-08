Algoritmo CalculoAreaPerimetroCirculo
	//1. Solicitamos los valores al usuario
	Imprimir 'Proporciona el radio del circulo'
	Leer radio
	//2. Realizamos los calculos
	area_circulo = PI * radio ^ 2
	perimetro_circulo = 2 * PI * radio
	//3. Imprimimos los valores
	Imprimir 'Area del circulo: ', area_circulo
	Imprimir 'Perimetro del circulo: ', perimetro_circulo
FinAlgoritmo
