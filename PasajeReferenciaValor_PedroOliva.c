#include <stdio.h>

void PasajeValor(int);
void PasajeReferencia(int*);

int main()
{
    int a = 1;
    int b = 1;
    int *punt = &b;
    
    PasajeValor(a);
    printf("a saliendo del main: %d\n\n", a);
    PasajeReferencia(punt);
    printf("b saliendo del main: %d\n", b);
}
void PasajeValor(int a){
    a++,
    printf("a saliendo del pasaje por valor: %d\n", a);
}
void PasajeReferencia(int *punt){
    *punt = *punt+1;
    printf("b saliendo del pasaje por referencia: %d\n", *punt);
}
