// Ejercicio Paso por Valor
// Las cadenas aunque son tipos por referencia
// se pasan por valor por default
// Definimos la funcion
void CambiarValor(ref string parametro)
{
    parametro = "Adios";
    Console.WriteLine($"Valor parametro: {parametro}");
}

// Creamos las variables
var argumento = "Hola";
Console.WriteLine($"Antes llamar funcion: {argumento}");
// Llamamos a la funcion
CambiarValor(ref argumento);
Console.WriteLine($"Despues llamar funcion: {argumento}");

