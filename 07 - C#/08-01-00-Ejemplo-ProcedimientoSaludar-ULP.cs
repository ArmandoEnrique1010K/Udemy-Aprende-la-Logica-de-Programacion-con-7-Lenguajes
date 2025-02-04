// Ejercicio para definir una funcion (procedimiento)
Console.Write("Proporciona el mensaje a mostrar: ");
var mensajeArg = Console.ReadLine();
// Llamamos a la funcion
Saludar(mensajeArg);

// Definimos el metodo saludar
void Saludar(string mensaje)
{
    Console.WriteLine($"Mensaje: {mensaje}");
}