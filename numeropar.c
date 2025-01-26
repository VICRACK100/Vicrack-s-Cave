#include<stdio.h>
int main(){
    int x;
    printf("Ingresa un número");
    scanf("%d",&x);
    if(x>0){
        if(x % 2 ==0){
            printf("Par");
        }
        else{
            printf("El número %d es impar",x);
        }
    }
}
