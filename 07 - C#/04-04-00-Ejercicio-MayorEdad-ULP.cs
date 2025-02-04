// Algoritmo Mayor Edad
const int EDAD_ADULTO = 18;
// Solicitamos la edad al usuario
Console.Write("Propociona tu edad: ");
var edadPersona = Convert.ToInt32(Console.ReadLine());
// Revisamos si es mayor de edad
if (edadPersona >= EDAD_ADULTO)
{
    Console.WriteLine($"Persona con edad: {edadPersona} es adulto");
}
else if (edadPersona < 0)
{
    Console.WriteLine($"Edad {edadPersona} erronea");
}
else
{
    Console.WriteLine($"Persona con edad: {edadPersona} es menor edad");
}