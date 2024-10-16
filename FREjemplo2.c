#include <stdio.h>

int main(void){
    int a,prom;
    int b=0;
    

    puts("Ingrese un numero:");
    scanf("%d",&a);
    prom = numero(a,b);
    printf("Factorial: %d", prom);

}

int numero(int a, int b){
    if(a>=b)
   return b;

    return a * numero (a,b-1); 
    

    
}
