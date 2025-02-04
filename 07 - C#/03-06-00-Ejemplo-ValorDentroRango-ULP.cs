// Definimos variables
var minimo = 0;
var maximo = 5;
// Solicitamos un valor entre 0 y 5
Console.Write("Proporciona un dato entre 0 y 5: ");
var dato = Convert.ToInt32(Console.ReadLine());
// Verificamos si el dato esta dentro de rango
var dentroRango = dato >= minimo && dato <= maximo;
Console.WriteLine($"Valor dentro de rango? {dentroRango}");