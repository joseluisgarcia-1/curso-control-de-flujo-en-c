#include <stdio.h>
int n = 20;
int main()
{
    while (n>10)
    {
        /* code */
        printf("n es igual a %d\n",n);
        n = n-1;
    }
    printf("hemos salido del bucle porque n es igual o menor que 10");
    return 0;
}