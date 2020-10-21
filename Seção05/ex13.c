// Faça um programa que leia um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem crescente.

#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    while (n % 2 != 0)
    {
        printf("Informe um número par: ");
        scanf("%d", &n);
    }

    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}