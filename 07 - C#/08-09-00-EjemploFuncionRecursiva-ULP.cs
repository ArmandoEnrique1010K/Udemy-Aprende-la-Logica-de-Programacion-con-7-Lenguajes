// Funciones Recursivas
// Imprimir del 1 al 5 de manera recursiva
int valor = 5;
FuncionRecursiva(valor);

// Definicion de la funcion
void FuncionRecursiva(int numero)
{
    // Caso Base
    if (numero == 1)
        Console.WriteLine(numero);
    else
    {
        // Caso recursivo
        FuncionRecursiva(numero - 1);
        Console.WriteLine(numero);
    }
}