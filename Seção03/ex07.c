// Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmul a de conversão é: C = 5,0 * (F – 32,0) / 9,0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.

#include <stdio.h>

int main()
{
    float c, f = 104.18;

    c = 5.0 * (f - 32.0) / 9.0;

    printf("%f\n", c);

    return 0;
}