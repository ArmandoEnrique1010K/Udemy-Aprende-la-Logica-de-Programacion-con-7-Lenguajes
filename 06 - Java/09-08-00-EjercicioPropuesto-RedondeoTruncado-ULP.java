import java.text.DecimalFormat;

public class ProgramaPrincipal {

    public static void main(String[] args){
        // Redeondeo y truncado en Java
        var numero = 8.5;
        // round -> Mayor .5 redondea hacia arriba
        var redondeo = Math.round(numero);
        System.out.println("Valor " + numero + " redondeado " + redondeo);
        // trunc -> No existe un metodo directo en Java para truncar
        // Usaremos la clase DecimalFormat
        //var patron = "#.#";
        var patron = "#"; // le quitamos el punto decimal
        var decimalFormat = new DecimalFormat(patron);
        var truncado = decimalFormat.format(numero);
        System.out.println("Valor " + numero + " truncado " + truncado);
    }
}