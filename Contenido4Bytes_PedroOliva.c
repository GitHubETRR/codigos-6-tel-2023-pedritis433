#include <stdio.h>

union {
    float MiNum;
    unsigned char byte[4];
}var;

int main()
{
    printf("Bienvenido al programa para ver el contenido de los 4 bytes de un float\nIngrese el valor flotante: ");
    scanf("%f", &var.MiNum);
    printf("\nLos bytes en hexadecimal son los siguientes:\n");
    printf("0x%x",var.byte[3]);
    printf("%x",var.byte[2]);
    printf("%x",var.byte[1]);
    printf("%x",var.byte[0]);
    return 0;
}
