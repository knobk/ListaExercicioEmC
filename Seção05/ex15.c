// Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números impares de 1 até N em ordem crescente.

#include <stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    while (n % 2 == 0)
    {
        printf("Informe um número impar: ");
        scanf("%d", &n);
    }

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
}