// Ejercicio Paso por Referencia

// Definimos la funcion
void CambiarValor(ref int parametro)
{
    parametro = 20;
}

// Creamos las variables
int argumento = 10;
Console.WriteLine("Antes llamar funcion: " + argumento);
// Llamamos a la funcion
CambiarValor(ref argumento);
Console.WriteLine("Despues llamar funcion: " + argumento);