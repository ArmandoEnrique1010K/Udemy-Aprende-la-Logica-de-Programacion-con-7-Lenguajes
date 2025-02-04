// do-while
var numero = 0;
do
{
    Console.Write("Proporciona un valor positivo: ");
    numero = Convert.ToInt32(Console.ReadLine());
} while (numero <= 0);
Console.WriteLine($"Valor positivo: {numero}");