// Obtener el largo de una cadena
// Las cadenas en C# son inmutables
// no se pueden modificar
var cadena = "Hola Mundo";
Console.WriteLine($"Largo cadena: {cadena.Length}");

// Recorrer la cadena
for(int i = 0; i < cadena.Length; i++)
{
    Console.WriteLine($"{i} - {cadena[i]}");
    //cadena[i] = ''; // arroja error, las cadenas son inmutables
}