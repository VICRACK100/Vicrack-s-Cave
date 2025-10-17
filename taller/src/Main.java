import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {

    /**Creacion deobjetos de la clse de Empleados*/


    Empleado e1 = new Empleado("",0.0,"");
    Empleado e2 = new Empleado("",0.0,"");
        Scanner sc = new Scanner(System.in);

    /**Leer los valores de cada empleado*/

        System.out.println("Primer Nombre: ");
        e1.setPrimerNombre(sc.nextLine());
        System.out.println("Apellido Paterno: ");
        e1.setApellidoPaterno(sc.nextLine());
        System.out.println("Salario");
        e1.setSalario(sc.nextDouble());

        /**Logica*/

        if (e1.getSalario()<0){
            e1.setSalario(0.0);
        }

        /**Imprimir*/
        System.out.println();
        System.out.println("Detalle Empleado"   +   e1.detalleEmpleado(e1.getPrimerNombre(),e1.getApellidoPaterno(),e1.getSalario()));

}
}