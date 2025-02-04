// Iterar una matriz en C#

// Definimos la matriz
int[,] matriz = {
            {100, 200, 300}, // Primer renglon
            {400, 500, 600} // Segundo renglon
        };
// Obtener la cantidad de elementos
Console.WriteLine($"Elementos matriz: {matriz.Length}");
// Obtener el largo de renglones (dimension 0)
Console.WriteLine($"No. renglones: {matriz.GetLength(0)}");
// Obtener el largo de columnas (dimension 1)
Console.WriteLine($"No. columnas: {matriz.GetLength(1)}");

// Iteramos la matriz
Console.WriteLine("-----Iteramos la Matriz ------");
for (int ren = 0; ren < matriz.GetLength(0); ren++)
{
    for (int col = 0; col < matriz.GetLength(1); col++)
    {
        Console.Write($"Matriz[{ren},{col}]={matriz[ren, col]} ");
    }
    Console.WriteLine();
}