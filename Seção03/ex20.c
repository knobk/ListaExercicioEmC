// Leia um valor de massa em q uilogramas e apresente-o convertido em libras. A fórmula de conversão é: L = K /  0,45, sendo K a massa em quilogramas e L a massa em libras.

#include <stdio.h>

int main()
{
    float l, k;
    scanf("%f", &k);

    l = k / 0.45;

    printf("%f\n", l);

    return 0;
}