// Redeondeo y truncado en C#
var numero = 8.5;
// Round -> .5 redondea hacia el entero par mas cercano)
//se llama Banker's Rounding (o round-to-even) (redondeo-a-un-par)
var redondeo = Math.Round(numero);
Console.WriteLine($"Valor {numero} redondeado {redondeo}");
// Truncate -> Solo regresa la parte entera
var truncado = Math.Truncate(numero);
Console.WriteLine($"Valor {numero} truncado {truncado}");