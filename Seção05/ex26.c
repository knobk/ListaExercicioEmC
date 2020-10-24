// Faça um algoritmo que encontre o primeiro multiplo de 11, 13 ou 17 após um número dado.

#include <stdio.h>

int main()
{
    int n;

    printf("Informe um númro: ");
    scanf("%d", &n);

    while (1)
    {
        if ((n % 11) == 0 || (n % 13) == 0 || (n % 17) == 0)
        {
            printf("%d\n", n);
            break;
        }
        n++;
    }

    return 0;
}