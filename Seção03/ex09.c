// Leia uma temperatura em grau s Celsius e apresente-a convertida em graus Kelvin. A Fórmula de conversão é:  K = C + 273,15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

#include <stdio.h>

int main()
{
    float k, c = 234.4;

    k = c + 273.15;

    printf("%f\n", k);

    return 0;
}