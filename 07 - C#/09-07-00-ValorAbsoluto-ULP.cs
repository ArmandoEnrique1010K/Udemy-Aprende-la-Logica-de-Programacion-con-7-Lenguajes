// Generar el valor absoluto de un numero
Console.Write("Proporciona un valor numerico: ");
var numero = Convert.ToInt32(Console.ReadLine());
var numeroAbs = Math.Abs(numero);
Console.WriteLine($"Valor absoluto de {numero} es: {numeroAbs}");