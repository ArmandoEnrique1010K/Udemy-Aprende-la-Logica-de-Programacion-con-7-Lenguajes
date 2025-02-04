// Algoritmo dia de la semana
Console.Write("Proporciona el dia de la semana: ");
var diaSemana = Convert.ToInt32(Console.ReadLine());
// Revisar que dia de la semana es
if (diaSemana == 1)
    Console.WriteLine("Lunes");
else if (diaSemana == 2)
    Console.WriteLine("Martes");
else if (diaSemana == 3)
    Console.WriteLine("Miercoles");
else if (diaSemana == 4)
    Console.WriteLine("Jueves");
else if (diaSemana == 5)
    Console.WriteLine("Viernes");
else if (diaSemana == 6)
    Console.WriteLine("Sabado");
else if (diaSemana == 7)
    Console.WriteLine("Domingo");
else
    Console.WriteLine($"Valor de dia erroneo {diaSemana}");