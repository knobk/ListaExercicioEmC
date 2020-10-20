//  Leia uma temperatura em grau s Kelvin e apresente-a convertida em graus Celsius.  A fórmula de conversão é: C = K – 273,15, sendo C a t emperatura em Celsius e K a temperatura em Kelvin.

#include <stdio.h>

int main()
{
    float c, k = 234.4;

    c = k - 273.15;

    printf("%f\n", c);

    return 0;
}