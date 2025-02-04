// Tipos de Datos en C#
// Tipos entero
//var miEntero = 10;
//miEntero = "Hola";
dynamic miEntero = 10;
miEntero = "Hola";
Console.WriteLine($"Mi entero: {miEntero}");


// Tipo Long (letra l o L es opcional)
dynamic miLong = 100L;
Console.WriteLine($"Mi long: {miLong}");


//Tipo float (la letra f o F)
float miFlotante = 6.5F;
Console.WriteLine($"Mi flotante: {miFlotante}");


// Tipo double (la letra d o D es opcional)
double miDoble = 10.7;
Console.WriteLine($"Mi double: {miDoble}");

// Tipo char
char miCaracter = 'A';
Console.WriteLine($"Mi caracter: {miCaracter}");

// tipo bool
bool miBoleano = true;
Console.WriteLine($"Mi boleando: {miBoleano}");

// mi cadena (string)
dynamic miCadena = "Hola Mundo";
//miCadena = 10;
Console.WriteLine($"Mi cadena: {miCadena}");
Console.WriteLine($"Largo cadena: {miCadena.Length}");