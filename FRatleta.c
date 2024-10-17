#include <stdio.h>
struct atleta
    {
        char deporte [30];
        char nombre[30];
        char pais [60];
        int medallas[100];  
    };
    int main(void){
        struct atleta atl[10];
        int i;
        for(i=0; i<=10; i++){
            printf("Ingresa tú nombre:\n");
            scanf("%s", atl[i].nombre);
            printf("Ingresa tú deporte:\n");
            scanf("%s", atl[i].deporte);
            printf("Ingresa tú pais:\n");
            scanf("%s", atl[i].pais);
            printf("Ingresa las medallas:\n");
            scanf("%s", atl[i].medallas);
    }
    i++;

        int b =0;
        for(i=1;i<5; i++){
            if(atl[i].medallas < atl[b].medallas){
                b=i;
            }
        }
        printf("Tus datos son:\n");
        printf("%s \n", atl[b].nombre);
        printf("%s\n", atl[b].deporte);
        printf("%s\n", atl[b].pais);
        printf("%s \n", atl[b].medallas);
    
    }
