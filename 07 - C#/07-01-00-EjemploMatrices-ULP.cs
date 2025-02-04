// Definir constantes tamanio matriz
const int RENGLONES = 2;
const int COLUMNAS = 3;
// Definimos la matriz
int[,] matriz = new int[RENGLONES, COLUMNAS];
//Llenamos la matriz manualmente
matriz[0,0] = 100;
matriz[0,1] = 200;
matriz[0,2] = 300;
matriz[1,0] = 400;
matriz[1,1] = 500;
matriz[1,2] = 600;
// Accedemos a los valores
Console.WriteLine($"Valor 1 [0,0] = {matriz[0,0]}");
Console.WriteLine($"Valor 6 [1,2] = {matriz[1,2]}");