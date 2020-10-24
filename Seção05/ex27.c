// Em matemática, o número harmônico designado por H(n) define-se como sendo a soma
// da série harmônica: H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
//Facça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).

#include <stdio.h>

int main()
{
    int i, n;
    float h = 0.0;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        h += 1.0 / i;
    }

    printf("H(n) = %f\n", h);
    return 0;
}