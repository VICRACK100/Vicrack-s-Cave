import java.sql.SQLOutput;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        //Constructor que es un espacio para un objeto
        Automovil auto1 = new Automovil();
        Automovil auto2 = new Automovil("Mercedes","Deportivo","azul",5.0);
        Automovil auto3 = new Automovil("Chevrolet","Aveo",5.6);
        //-----------------------------------------------------------//

        //Asignacion de datos o atributos
        System.out.println("Datos del objeto auto1");
        auto1.marca = "BMW";
        auto1.modelo = "i320";
        auto1.color = "negro";
        auto1.cilindraje = 3.2 ;

        //---------------------------------------------------------//


        //Llamar metodo
        auto1.detalle();
        auto2.detalle();
        auto3.detalle();




    }
}