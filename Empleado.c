#include <stdio.h>


    struct empleado
    {
        char nombre [30];
        char sexo[30];
        int sueldo[1000];  
    };
    int main(void){
        struct empleado emp[5];
        
        int i;
        for(i=0; i<=5; i++){
            printf("Ingresa tú nombre:\n");
            scanf("%s", emp[i].nombre);
            printf("Ingresa tú sexo:\n");
            scanf("%s", emp[i].sexo);
            printf("Ingresa tú sueldo:\n");
            scanf("%s", emp[i].sueldo);
        }
        i++;

        int b =0;
        for(i=1;i<5; i++){
            if(emp[i].sueldo < emp[b].sueldo){
                b=i;
            }
        }

        printf("Tus datos son:\n");
        printf("%s \n", emp[b].nombre);
        printf("%s\n", emp[b].sexo);
        printf("%s\n", emp[b].sueldo);

        return 0;
        
    }
