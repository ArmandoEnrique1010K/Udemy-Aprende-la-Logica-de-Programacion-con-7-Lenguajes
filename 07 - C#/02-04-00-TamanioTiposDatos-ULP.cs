// Tipos de Datos en C#
// Tipos entero
int miEntero = 10;
//Console.WriteLine($"Mi entero: {miEntero}");
Console.WriteLine($"Entero tamanio bytes: {sizeof(int)}");
Console.WriteLine($"Entero valor minimo: {int.MinValue}");
Console.WriteLine($"Entero valor maximo: {int.MaxValue}");


// Tipo Long (letra l o L es opcional)
long miLong = 100L;
//Console.WriteLine($"Mi long: {miLong}");
Console.WriteLine($"Long tamanio bytes: {sizeof(long)}");


//Tipo float (la letra f o F)
float miFlotante = 6.5F;
//Console.WriteLine($"Mi flotante: {miFlotante}");
Console.WriteLine($"Flotante tamanio bytes: {sizeof(float)}");
Console.WriteLine($"Flotante valor minimo: {float.MinValue}");
Console.WriteLine($"Flotante valor maximo: {float.MaxValue}");


// Tipo double (la letra d o D es opcional)
double miDoble = 10.7;
//Console.WriteLine($"Mi double: {miDoble}");
Console.WriteLine($"Double tamanio bytes: {sizeof(double)}");

// Tipo char
char miCaracter = 'A';
//Console.WriteLine($"Mi caracter: {miCaracter}");
Console.WriteLine($"char tamanio bytes: {sizeof(char)}");

// tipo bool
bool miBoleano = true;
//Console.WriteLine($"Mi boleando: {miBoleano}");
Console.WriteLine($"Boolean tamanio bytes: {sizeof(bool)}");

// mi cadena (string)
string miCadena = "Hola Mundo";
Console.WriteLine($"Mi cadena: {miCadena}");
Console.WriteLine($"Largo cadena: {miCadena.Length}"); 