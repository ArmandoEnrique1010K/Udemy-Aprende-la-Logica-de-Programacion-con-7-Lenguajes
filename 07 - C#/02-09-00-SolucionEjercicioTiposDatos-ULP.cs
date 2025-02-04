// Ejercicio Tipos de Datos

// Leer los valores
Console.Write("Proporciona tu nombre: ");
var nombre = Console.ReadLine();
Console.Write("Proporciona tu edad: ");
var edad = Convert.ToInt32(Console.ReadLine());
Console.Write("Proporciona tu sueldo (USD): ");
var sueldo = Convert.ToDouble(Console.ReadLine());
Console.Write("Eres un empleado de confianza (true/false): ");
var empleadoDeConfianza = Convert.ToBoolean(Console.ReadLine());

// Imprimir los valores
Console.WriteLine("La informacion proporcionada es: ");
Console.WriteLine($"Nombre: {nombre}");
Console.WriteLine($"Edad: {edad}");
Console.WriteLine($"Sueldo: {sueldo:C2}");//Currency - moneda
Console.WriteLine($"Empleado de confianza: {empleadoDeConfianza}");
