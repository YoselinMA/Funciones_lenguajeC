#include <stdio.h>
int numeros (int a, int b);
int main(){

    int a,b, prom;
    puts("Ingresa un numero:");
    scanf("%d", &a);

    puts("Ingresa otro numero:");
    scanf("%d",&b);
    prom = numeros(a,b);

    printf("El numero mayor es: %d\n", prom);

}

int numeros (int a, int b){
    int prom;
    if(a<b){
        prom = b;
    }
    else if (b<a){
       prom = a;
    }
   
    return prom;
}
