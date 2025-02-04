// Ejercicio Paso por Valor

// Definimos la funcion
void CambiarValor(int parametro)
{
    parametro = 20;
}

// Creamos las variables
var argumento = 10;
Console.WriteLine("Antes llamar funcion: " + argumento);
// Llamamos a la funcion
CambiarValor(argumento);
Console.WriteLine("Despues llamar funcion: " + argumento);
