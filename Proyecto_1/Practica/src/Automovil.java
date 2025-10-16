public class Automovil {
    //Declaracion de atributos
    private String marca;
    private String modelo;
    private String color ;
    private Double cilindraje;

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public Double getCilindraje() {
        return cilindraje;
    }

    public void setCilindraje(Double cilindraje) {
        this.cilindraje = cilindraje;
    }

    //Declaracion de Constructores y Destructores


    public Automovil() {
    }



    //Desarollo de metodos propios
    public String detalle(String ma,String mo, String co , Double cil) {

        System.out.println();
        String auto;
        auto =  "Marca : "      + ma    +   "\n"  +
                "Modelo : "     + mo    +   "\n"  +
                "Color : "      + co    +   "\n"  +
                "Cilindraje : " + Double.toString(cil);
        return auto;

    }
}

