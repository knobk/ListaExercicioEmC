// Leia um ângulo em radianos e ap resente-o convertido em graus. A fórmula de conversão é: G = R * 180 / Pi, sendo  G o ângulo em graus e R em radianos e Pi = 3,14.

#include <stdio.h>

int main()
{
    float g, r, pi = 3.14;
    scanf("%f", &r);

    g = r * 180.0 / pi;

    printf("%f\n", g);

    return 0;
}