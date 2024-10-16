#include <stdio.h>

int factorial( int n);

int main(void){
    int num;
    int fac;
    printf("Digite un número: "); 
    scanf("%d", &num);
    fac = factorial(num);
    printf("El factorial de %d %s %d\n", num, "es", fac);
}

int factorial ( int n){
    if ( n < 1 )
        return 1;
    return n * factorial(n-1); 
}
