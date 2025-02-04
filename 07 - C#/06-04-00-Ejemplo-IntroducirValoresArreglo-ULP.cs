// Introducir valores a un arreglo

// Declarar el arreglo
Console.Write("Proporciona el largo del arreglo: ");
var largoArreglo = Convert.ToInt32(Console.ReadLine());
// Creamos el arreglo de manera dinamica
int[] enteros = new int[largoArreglo];

// Solicitamos los valores
for (int i = 0; i < largoArreglo; i++)
{
    Console.Write($"enteros[{i}] = ");
    enteros[i] = Convert.ToInt32(Console.ReadLine());
}

// Imprimir los valores del arreglo
Console.WriteLine("\nImpresion del Arreglo: ");
for (int i = 0; i < enteros.Length; i++)
{
    Console.WriteLine($"enteros[{i}] = {enteros[i]}");
}