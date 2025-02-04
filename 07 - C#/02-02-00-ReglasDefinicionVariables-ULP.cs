/* Reglas para definir el nombre de una variable
1. Puede contener letras, digitos y _
2. Debe comenzar con una letra
3. Inicia con letra minuscula y sin espacios
4. Es sensible a mayusculas/minusculas
5. No se pueden usar palabras reservadas (int, boolean, etc)
*/
int miVariable = 10;
Console.WriteLine($"Mi variable: {miVariable}");

int _miVariable = 20;
Console.WriteLine($"Mi _variable: {_miVariable}");

// Error de compilacion (sensible a mayusculas/minusculas)
//Console.WriteLine(MiVariable);

// Error, no se permite iniciar con numeros
//int 1_miVariable = 30;
