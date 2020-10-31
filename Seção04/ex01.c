// Faça um programa que receba dois números e mostre qual deles é o maior.

#include <stdio.h>

int main()
{
    int n1, n2, maior;

    printf("Informe dois números: ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
    {
        maior = n1;
    }
    else
    {
        maior = n2;
    }

    printf("%d é o maior. \n", maior);

    return 0;
}
