// Sumar los primeros 5 numeros
var maximo = 5;
var acumuladorSuma = 0;

//Iteramos los valores
for (int numero = 1; numero <= maximo; numero++)
{
    // Imprimimos lo que se va a sumar
    Console.WriteLine($"(acumuladorSuma + numero) -> " +
                      $"{acumuladorSuma} + {numero}" );
    // acumuladorSuma = acumuladorSuma + numero
    acumuladorSuma += numero;

    // Imprimimos el resultado parcial
    Console.WriteLine($"Suma parcial acumulada: {acumuladorSuma}\n");
}
Console.WriteLine($"La suma primeros 5 numeros es: {acumuladorSuma}" );

