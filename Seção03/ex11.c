// Leia uma velocidade em m/s (me tros por segundo) e apresente-a convertida em km/h (quilômetros por hora). A F órmula de conversão é: K = M * 3,6, sendo K a velocidade em km/h e M em m/s.

#include <stdio.h>

int main()
{
    float k, m;
    scanf("%f", &m);

    k = m * 3.6;

    printf("%f\n", k);

    return 0;
}