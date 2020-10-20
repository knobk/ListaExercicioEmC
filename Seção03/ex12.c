// Leia uma distância em milhas  e apresente-a convertida em quilômetros. A fó rmula de conversão é: K = 1,61 * M, sendo K a distância em quilô metros e M em milhas.

#include <stdio.h>

int main()
{
    float m, k;
    scanf("%f", &m);

    k = 1.61 * m;

    printf("%f\n", k);

    return 0;
}