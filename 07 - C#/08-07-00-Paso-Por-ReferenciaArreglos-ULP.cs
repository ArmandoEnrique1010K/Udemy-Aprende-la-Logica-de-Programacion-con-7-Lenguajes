// Ejercicio Paso por Referencia con Arreglos

// Definimos la funcion
void CambiarValor(int[] parametro)
{
    parametro[0] = 20;
}

// Creamos las variables
int[] argumento = { 10 };
Console.WriteLine("Antes llamar funcion: " + argumento[0]);
// Llamamos a la funcion
CambiarValor(argumento);
Console.WriteLine("Despues llamar funcion: " + argumento[0]);
