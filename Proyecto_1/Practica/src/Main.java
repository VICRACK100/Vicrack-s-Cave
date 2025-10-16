import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        //Constructor que es un espacio para un objeto
        Automovil auto1 = new Automovil();
        Automovil auto2 = new Automovil();
        Automovil auto3 = new Automovil();
        Scanner sc = new Scanner(System.in);
        //-----------------------------------------------------------//

        //Asignacion de datos o atributos
        System.out.println("Datos del objeto auto1");
        System.out.println("Marca :");
        auto1.setMarca      (sc.nextLine());
        System.out.println("Modelo :");
        auto1.setModelo     (sc.nextLine());
        System.out.println("Color :");
        auto1.setColor      (sc.nextLine());
        System.out.println("Cilindraje :");
        auto1.setCilindraje (sc.nextDouble());

        //---------------------------------------------------------//
        System.out.println(auto1.detalle(auto1.getMarca(),auto1.getModelo(),auto1.getColor(),auto1.getCilindraje()));






    }
}