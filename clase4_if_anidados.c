#include <stdio.h>
//Este programa genera menús de acuerdo a lo que el usuario elija
int option0 = 3;
int option1 = 1;
//int option2 = 2;
int option2 = 0;

int main(){
    printf("Bienvenido a platzi food and drink\n");
    printf("opcion 0 para platzi bebidas\n");
    printf("opcion 1 para platzi comidas\n");
    printf("opcion 2 para platzi postres\n");

    if (option0 == 0)
    {
        printf("Usted eligio la opcion 0, ver nuestro menu de bebidas, elija una:\n");
        if (option2 == 0)
            printf("Usted pidio una platzi cola cero");
        else if (option2 == 1)
            printf("Usted eligio una platzi cola con azucar");
        else if (option2 == 2)
            printf("Usted eligio una platzi pinia colada con azucar");
        else
        printf("opción inválida");
    }
    else if (option1 == 1)
    {
        printf("Usted eligio la opcion %d, ver nuestro menu de comidas, elija una:\n",option1);
        if (option2 == 0)
            printf("Usted pidio una platzi salchi con pollo");
        else if (option2 == 1)
            printf("Usted eligio una platzi hamburguesa con papas");
        else if (option2 == 2)
            printf("Usted eligio una platzi sandwich con gaseosa");
        else
        printf("opción inválida");
    }
    return 0;
}