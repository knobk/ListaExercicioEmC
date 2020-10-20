// Leia um ângulo em graus e apresente-o convert ido em radianos. A fórmula de conversão é: R = G * Pi /180, sendo G o ângul o em graus e R em radianos e Pi = 3,14.

#include <stdio.h>

int main()
{
    float g, r, pi = 3.14;
    scanf("%f", &g);
    
    r = g * pi / 180.0;

    printf("%f\n", r);

    return 0;
}