/**
 3.13 (La clase Empleado) Cree una clase llamada Empleado, que incluya tres variables de instancia:
 un primer nombre (tipo String), un apellido paterno (tipo String) y un salario mensual (double).
 Su clase debe tener un constructor que inicialice las tres variables de instancia.
 Proporcione un método establecer y un método obtener para cada variable de instancia.
 Si el salario mensual no es positivo, no establezca su valor.
 Escriba una aplicación de prueba llamada PruebaEmpleado, que demuestre las capacidades de la clase Empleado.
 Cree dos objetos Empleado y muestre el salario anual de cada objeto.
 Después, proporcione a cada Empleado un aumento del 10% y muestre el salario anual de cada Empleado otra vez.
 */

public class Empleado {

/** Atributos de clase*/

private String primerNombre;
private String apellidoPaterno;
private double salario;

/**Constructores y destructores*/

    public Empleado(String primerNombre, double salario, String apellidoPaterno) {
        this.primerNombre = primerNombre;
        this.salario = salario;
        this.apellidoPaterno = apellidoPaterno;
    }

    /**Metodos propios de JAVA*/

    public String getPrimerNombre() {
        return primerNombre;
    }

    public void setPrimerNombre(String primerNombre) {
        this.primerNombre = primerNombre;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public String getApellidoPaterno() {
        return apellidoPaterno;
    }

    public void setApellidoPaterno(String apellidoPaterno) {
        this.apellidoPaterno = apellidoPaterno;
    }

    public String detalleEmpleado(String pn,String ap, Double sa){
        String de;
        de = "  Primer nombre : "               + pn + "\n"+
                "Apellido Paterno : "           + ap + "\n"+
                "Salario : "+ Double.toString   (sa);
        return de;
    }
}
