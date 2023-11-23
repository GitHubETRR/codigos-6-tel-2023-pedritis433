#include <stdio.h>

int main()
{
    unsigned int continuar=1;
    printf("Bienvenido al programa que lee bytes de un flotante utilizando punteros.\n");
    printf("Ingrese el flotante a leer: \n");
    float fval;
    scanf("%f", &fval);
    char* b = &fval;
    do{
        printf("\nIngrese el byte que quiere leer: \n");
        int numByte;
        scanf("%d", &numByte);
        switch(numByte){
            case 1:
                printf("[%p]-[%X]\n", b, *b);
                break;
            case 2:
                b++;
                printf("[%p]-[%X]\n", b, *b);
                break;
            case 3:
                b+=2;
                printf("[%p]-[%X]\n", b, *b); 
                break;
            case 4:
                b+=3;
                printf("[%p]-[%X]\n", b, *b); 
                break;
        }
        printf("\nLeer otro byte, ingrese 1 \nNo leer otro byte, ingrese 0 \n");
        scanf("%d", &continuar);
    }while(continuar==1);
    return 0;
}
