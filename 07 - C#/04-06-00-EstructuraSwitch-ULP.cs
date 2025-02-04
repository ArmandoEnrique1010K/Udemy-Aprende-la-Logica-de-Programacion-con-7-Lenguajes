// Algoritmo dia de la semana
Console.Write("Proporciona el dia de la semana: ");
var diaSemana = Convert.ToInt32(Console.ReadLine());
// Revisar que dia de la semana es
switch (diaSemana)
{
    case 1:
        Console.WriteLine("Lunes");
        break;
    case 2:
        Console.WriteLine("Martes");
        break;
    case 3:
        Console.WriteLine("Miercoles");
        break;
    case 4:
        Console.WriteLine("Jueves");
        break;
    case 5:
        Console.WriteLine("Viernes");
        break;
    case 6:
        Console.WriteLine("Sabado");
        break;
    case 7:
        Console.WriteLine("Domingo");
        break;
    default:
        Console.WriteLine("Valor de dia erroneo: " + diaSemana);
        break;// break no es opcional como en otros lenguajes
} // Fin switch