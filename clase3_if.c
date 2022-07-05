#include <stdio.h>

int n = 9;
//int n = -1;


int main(){
    //if(n>10 || n < 20)
    if(n>10 && n < 20)
    printf("el número es mayor que diez");
    else if (n == 10)
    printf("El número es igual que 10");
    else if (n>20)
    printf("El número es mayor que 20");
    //else if (n<10)
    else if (n<10 && n >= 0)
    //printf("El número es menor que 10");
    printf("El número %d, está en el rango de 0 al 9",n);
    else
    //printf("Error, no hay número");
    printf("No se aceptan números negativos");
    return 0;

}