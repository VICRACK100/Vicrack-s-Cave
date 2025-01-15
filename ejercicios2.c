#include<stdio.h>
int main(){
    int num1,num2,num3,i=0,suma=0;
    printf("Ingrese sus 3 digitos\n");
    printf("Ingrese su digito\n", i++);
    scanf("%d", &num1);
    printf("Ingrese su digito\n", i++);
    scanf("%d",&num2);
    printf("Ingrese su digito\n", i++);
    scanf("%d", &num3);
    if (num1 + num2 == num3){
        printf("Existe relacion: ");
        printf("%d,+ %d = %d",num1,num2, num3);
    }else if (num1 + num3 == num2){
        printf ("Existe relacion: ");
        printf("%d,+ %d = %d",num1,num3, num2);
    }else if (num2 + num3 == num1){
        printf ("Existe relacion: ");
        printf("%d + %d = %d",num2,num3, num1);
    } else
    printf("No existe relacion");

    
}
