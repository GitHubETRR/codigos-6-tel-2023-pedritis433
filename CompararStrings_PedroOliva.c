#include <stdio.h>
#define numSTR 20
int compSTR(char*, char*);

int main()
{
    char str1[numSTR];
    char str2[numSTR];
    str1[19] = 0;
    str2[19] = 0;
    char* pstr1=str1;
    char* pstr2=str2;
    printf("Bienvenido al programa que compara strings");
    printf("\nIngrese el primer string: ");
    scanf("%s", str1);
    printf("\nIngrese el segundo string: ");
    scanf("%s", str2);
    
    compSTR(pstr1, pstr2);
    
    if (compSTR(pstr1, pstr2) == 1) printf("Los strings son distintos");
    else printf("Los strings son iguales");
}

int compSTR(char *pstr1,char *pstr2){
    int flag = 0;
    for(int i=0; i<=numSTR-1; i++){
        if (*(pstr1+i) != *(pstr2+i)){
          return 1;
        }    
    }
    return 0;
}
