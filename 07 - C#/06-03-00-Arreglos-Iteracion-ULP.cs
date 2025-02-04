// Arreglos en C#
// 1. Declaracion del arreglo
int[] enteros = { 100, 200, 300, 400 };
// Iteramos los elementos del arreglo
Console.WriteLine($"Largo arreglo: {enteros.Length}");
// Sintaxis clasica del ciclo for
for (int i = 0; i < enteros.Length; i++)
{
    Console.WriteLine($"enteros[{i}] = {enteros[i]}");
}
// for-each (for mejorado)
Console.WriteLine("For each (for mejorado)");
foreach (var numero in enteros)
    Console.WriteLine($"Valor = {numero}");