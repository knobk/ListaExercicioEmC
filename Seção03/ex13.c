// Leia uma distância em quilômetros e aprese nte-a convertida em milhas. A fórmula de conversão é: M = K / 1,61, sendo K a distâ ncia em quilômetros e M em milhas.

#include <stdio.h>

int main()
{
    float m, k;
    scanf("%f", &k);

    m = k / 1.61;

    printf("%f\n", m);

    return 0;
}