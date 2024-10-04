#include <stdio.h>

struct CD{
    char titulo[100];
    char artista[50];
    char numero[200];
    char anio[30];
    char presio[30];
};
int main(void){
    struct CD cd1;
    printf("Ingresa el titulo\n");
    gets(cd1.titulo);
    printf("Ingresa el numero de canciones\n");
    gets(cd1.numero);
    printf("Ingresa el anio\n");
    gets(cd1.anio);
    printf("Ingresa el precio:\n");
    gets(cd1.presio);

    printf("%s\n %s\n %s\n %s", cd1.titulo, cd1.numero,cd1.anio, cd1.presio);
}
