// Sentencia if-else
// Pedimos un valor
Console.Write("Proporciona un numero: ");
var numero = Convert.ToInt32(Console.ReadLine());
// Verificamos si es un valor positivo
/*if (numero > 0)
{
    Console.WriteLine($"Valor positivo: {numero}");
}
else
{
    Console.WriteLine($"Valor Cero o Negativo: {numero}");
}*/

// Operador Ternario (regresa un valor)
var resultado = (numero > 0) ? "Positivo" : "Cero o Negativo";
Console.WriteLine($"Resultado: {resultado}");