#include <stdio.h>
int option1 = 0;
int option2 = 0;

int main(){
    printf("Bienvenido a platzi food and drink\n");
    printf("opcion 0 para platzi bebidas\n");
    printf("opcion 1 para platzi comidas\n");
    printf("opcion 2 para platzi postres\n");

    switch (option1)
    {
        case 0:
            printf("Bienvenido a platzi food and drink\n");
            printf("opcion 0 para platzi bebidas\n");
            printf("opcion 1 para platzi comidas\n");
            printf("opcion 2 para platzi postres\n");
            switch (option2)
            {
                case 0:
                    printf("usted eligio una platzi cola cero");
                    break;
                
                default:
                    break;
            }
                break;
        case 1:
                /**/
            break;
        case 2:
                /**/
            break;
        default:
        break;
    }
}