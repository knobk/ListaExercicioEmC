// Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
// conforme a formula a seguir ´ E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

#include <stdio.h>

int main()
{
    int i, n;
    float e = 0.0, fat = 1.0;

    printf("Informe o valor de n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fat *= i;
        e += 1.0 / fat;
    }

    printf("E = %f\n", e);

    return 0;
}