// Sentencia if-else-if-else
Console.Write("Proporciona un numero: ");
var numero = Convert.ToInt32(Console.ReadLine());
// Verificamos si es un valor positivo
if (numero > 0)
{
    Console.WriteLine($"Valor positivo: {numero}");
}
// Verificamos si es un valor negativo
else if (numero < 0)
{
    Console.WriteLine($"Valor negativo: {numero}");
}
// Si no se cumplio ninguna de las opciones anterioes, es cero
else
{
    Console.WriteLine("Valor Cero: " + numero);
}