// Generamos un valor aleatorio
// Creamos un objeto random
var aleatorio = new Random();
//Generamos los valores entre 0 y 100 (no incluye el limite)
int valorAleatorio = aleatorio.Next(100 + 1);
Console.WriteLine($"Valor aleatorio (0 y 100) : {valorAleatorio}");
// Numero aleatorio entre 100 y 200
int min = 100, max = 200;// Incluye valor minimo, NO incluye valor maximo
valorAleatorio = aleatorio.Next(min, max + 1);
Console.WriteLine($"Valor aleatorio (100 y 200): {valorAleatorio}");