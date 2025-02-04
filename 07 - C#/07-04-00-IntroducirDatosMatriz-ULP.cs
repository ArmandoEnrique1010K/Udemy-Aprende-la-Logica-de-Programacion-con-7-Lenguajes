// Introducir datos en una matriz
// Definimos las variables
int renglones, columnas;
// Definimos matriz
Console.Write("Proporciona los renglones: ");
renglones = Convert.ToInt32(Console.ReadLine());
Console.Write("Proporciona las columnas: ");
columnas = Convert.ToInt32(Console.ReadLine());
// Declaramos la matriz
int[,] matriz = new int[renglones,columnas];
// Solicitar los valores al usuario
for (int ren = 0; ren < renglones; ren++)
{
    for (int col = 0; col < columnas; col++)
    {
        Console.Write($"Dato[{ren},{col}] = ");
        matriz[ren,col] = Convert.ToInt32(Console.ReadLine());
    }
}
// Iteramos la matriz
Console.WriteLine("-----Iteramos la Matriz ------");
for (int ren = 0; ren < renglones; ren++)
{
    for (int col = 0; col < columnas; col++)
    {
        Console.Write($"Matriz[{ren},{col}]={matriz[ren,col]} ");
    }
    Console.WriteLine();
}