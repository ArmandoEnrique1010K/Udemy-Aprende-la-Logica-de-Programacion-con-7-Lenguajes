// Operadores Logicos
var a = true;
var b = false;
Console.WriteLine($"Valor a: {a}");
Console.WriteLine($"Valor b: {b}");
// Operador Logico &&  ( and o Y )
// Regresar verdadero si ambos operandos son verdaderos
var c = a && b;
Console.WriteLine($"Resultado operador and: {c}");
// Operador Logico ||  ( or o O )
// Regresa verdadero si cualquiera de los operandos es verdadero
c = a || b;
Console.WriteLine($"Resultado operador or: {c}");
// Operador Logico !  ( Not o NO )
// Invierte el valor original ( de 1 a 0  o de 0 a 1 )
c = !a;
Console.WriteLine($"Resultado operador not (!a): {c}");