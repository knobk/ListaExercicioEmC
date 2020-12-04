//Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas não simultaneamente pelos dois.

#include <stdio.h>

int main()
{
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("%d é divisivel por 3 e 5\n", num);
    }
    else
    {
        if (num % 3 == 0)
        {
            printf("%d é divisivel por 3\n", num);
        }
        if (num % 5 == 0)
        {
            printf("%d é divisivel por 5\n", num);
        }
    }

    return 0;
}