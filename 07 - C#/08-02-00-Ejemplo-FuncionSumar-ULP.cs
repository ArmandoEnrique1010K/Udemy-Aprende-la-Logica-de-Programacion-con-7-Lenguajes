// Ejercicio Funcion Sumar

// Creamos las variables
// Solicitamos los valores de los argumentos
Console.Write("Proporciona el valor a: ");
var argA = Convert.ToInt32(Console.ReadLine());
Console.Write("Proporciona el valor b: ");
var argB = Convert.ToInt32(Console.ReadLine());
// Llamamos a la funcion Sumar
var resultado = Sumar(argA, argB);
Console.WriteLine("Resultado de la suma: " + resultado);

// Definimos la funcion sumar
int Sumar(int a, int b)
{
    int resultadoSuma = a + b;
    return resultadoSuma;
}

