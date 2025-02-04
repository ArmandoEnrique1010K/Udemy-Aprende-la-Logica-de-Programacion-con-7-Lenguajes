//Declaracion un arreglo de enteros

int[] enteros;
// Reservamos espacio memoria
enteros = new int[5];
// Modificar los valores de un arreglo
enteros[0] = 13;
enteros[1] = 21;
enteros[4] = 62;

// Imprimir los valores
Console.WriteLine("Valor 1 Arreglo[0] = " + enteros[0]);
Console.WriteLine("Valor 2 Arreglo[1] = " + enteros[1]);
Console.WriteLine("Valor 3 Arreglo[2] = " + enteros[2]);
Console.WriteLine("Valor 4 Arreglo[3] = " + enteros[3]);
Console.WriteLine("Valor 5 Arreglo[4] = " + enteros[4]);

// Si imprimimos la variable del arreglo 
// no regresa la direccion de memoria como en Java
// sino solo el tipo de dato
Console.WriteLine("Arreglo enteros: " + enteros);