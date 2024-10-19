#include <stdio.h>
#include <string.h>

void pal (char ca []);
int main(){
    char ca [10];
    int i, len, prom;
    puts("Ingresa una palabra: ");
    scanf("%s", &ca);
    len = strlen (ca);
    pal(ca);
}

void pal (char ca []){
    int i, len;
    
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", ca[i]);
}

}
