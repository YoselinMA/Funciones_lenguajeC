#include <stdio.h>

struct Fracciones{
    int num;
    int deno;
    int num2;
    int deno2;
};

int frac(int num, int deno, int num2, int deno2);
int main(void) {
    struct Fracciones fra;
    int num, num2;
    int deno;
    int total, deno2;

    printf("Ingrese la primera fraccion (numerador/denominador): ");
    scanf("%d/%d", &num, &deno);

    printf("Ingrese la segunda fraccion (numerador/denominador): ");
    scanf("%d/%d", &num2, &deno2);

    total = suma(num, deno, num2, deno2);
    printf("Suma: %d/%d\n", total);

}

int suma(int num, int deno, int num2, int deno2){
    int total;
    int a;
    int f;
    int c;

    a = num * deno2;
    f = num2 * deno;
    c = deno * deno2;
    total = a + f;
    
    return total, c;

}
