#include <stdio.h>

union {
    float num;
    struct{
        unsigned int mantisa : 23;
        unsigned int exponente : 8;
        unsigned int signo : 1;
    }
    _4byte;
}var;

void mascara(int valor, int tamano);


int main(){
    printf("Ingrese el valor flotante: ");
    scanf("%f", &var.num);
    printf("0b: %d | ", var._4byte.signo);
    mascara(var._4byte.exponente, 8);
    printf(" | ");
    mascara(var._4byte.mantisa, 23);
    return 0;
}

void mascara(int valor, int tamano){
    int i;
    for(i=tamano;i >= 0;i--){
        if((valor>>i)&1)printf("1");
        else printf("0");
    }
}
