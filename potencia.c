int main(void){
int x,y;
int max;
x = 100;
y = 10;
max = potencia(x,y);
printf("La potencia es: %d ", max);

}
int potencia (int a, int b){
    if (b >= 1){
        
        potencia (b, b-1);
        printf("%d\n", b);
    }
}
