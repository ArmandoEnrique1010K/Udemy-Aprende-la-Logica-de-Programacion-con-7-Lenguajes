class ProgramaPrincipal
{

    // Atributo de instancia de clase (objeto)
    int atributoInstancia = 5;

    // Atributo de la clase
    static int atributoClase = 10;

    static void Main(String[] args)
    {
        // Variables local al metodo main
        var variableLocal = 20;
        Console.WriteLine($"Variable local: {variableLocal}");
        Console.WriteLine($"Variable clase: {atributoClase}");
        // Creamos un objeto de la clase ProgramaPrincipal
        var objeto = new ProgramaPrincipal();
        Console.WriteLine($"Variable instancia: {objeto.atributoInstancia}");
    }
}