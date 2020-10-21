// Leia um valor área em metros quadrados m2 e apresente-o convertido em acres. A
// fórmula de conversão é: A = M * 0, 000247, sendo M a área em metros quadrados e
// A a área em acres.

#include <stdio.h>

int main()
{
    float m, a;
    scanf("%f", &m);

    a = m * 0.000247;

    printf("%f\n", a);

    return 0;
}