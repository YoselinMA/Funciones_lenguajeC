#include <stdio.h>
#include <math.h>

float triangulo(float a, float b, float c);
int main(){
    int a,b,c;
    float prom, area, p;
    puts("Ingresa la primera longitud:");
    scanf("%d", &a);
    puts("Ingresa la segunda longitud:");
    scanf("%d", &b);
    puts("Ingresa la tercera longitud:");
    scanf("%d", &c);

    prom= triangulo(a,b,c);
    printf("El area del triangulo es: %2.1f", prom);

}

float triangulo(float a, float b, float c){
    float area, p;
    float prom;
    p = ((a+b+c)/2);
    prom = sqrt((p *(p-a)*(p-b)*(p-c)));   
   return prom;

}
