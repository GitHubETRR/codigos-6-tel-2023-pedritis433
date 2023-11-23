#include <stdio.h>

struct alumno {
    unsigned char nombre[15];
    unsigned char apellido[15];
    unsigned char rama[4];
    unsigned int año;
    unsigned int edad;
};

int main(void)
{
    int CanAlum;
    printf("Ingrese la cantidad de alumnos a estructurar\n");
    scanf("%d", &CanAlum);
   
    struct alumno alumno[CanAlum];
    for(int i=0; i<CanAlum ;i++){
        printf("Ingrese el nombre del alumno %d\n", i);
        scanf("%s", alumno[i].nombre);
        printf("Ingrese el apellido del alumno %d\n", i);
        scanf("%s", alumno[i].apellido);
        printf("Ingrese la rama del alumno %d\n", i);
        scanf("%s", alumno[i].rama);
        printf("Ingrese el año del alumno %d\n", i);
        scanf("%d", &alumno[i].año);
        printf("Ingrese la edad del alumno %d\n", i);
        scanf("%d", &alumno[i].edad);
    }
   
    for(int j=0; j<CanAlum ;j++){
        printf("\n\nEl nombre del alumno %d es %s", j, alumno[j].nombre);
        printf("\nEl apellido del alumno %d es %s", j, alumno[j].apellido);
        printf("\nLa rama del alumno %d es %s", j, alumno[j].rama);
        printf("\nEl año del alumno %d es %d", j, alumno[j].año);
        printf("\nLa edad del alumno %d es %d", j, alumno[j].edad);
       
    }
    return 0;
}
