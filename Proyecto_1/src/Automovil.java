public class Automovil {
    //Declaracion de atributos
    String marca;
    String modelo;
    String color = "Blanco";
    double cilindraje;

//Declaracion de Constructores y Destructores


    public Automovil() {
    }

    public Automovil(String marca, String modelo, double cilindraje) {
        this.marca = marca;
        this.modelo = modelo;
        this.cilindraje = cilindraje;
    }

    public Automovil(String marca, String modelo, String color, double cilindraje) {
        this.marca = marca;
        this.modelo = modelo;
        this.color = color;
        this.cilindraje = cilindraje;
    }

    //Desarollo de metodos propios
    public void detalle() {

        System.out.println();
        System.out.println("Marca :" + this.marca);
        System.out.println("Modelo :" + this.modelo);
        System.out.println("Color :" + this.color);
        System.out.println("Cilindraje :" + this.cilindraje);


    }
}
