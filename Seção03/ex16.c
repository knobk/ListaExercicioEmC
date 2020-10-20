// Leia um valor de comprimento  em polegadas e apresente-o convertido em centímetros. A Fórmula de  conversão é: C = P * 2,54, sendo C o comprimento em centímetros e P o comprimento e m polegadas.

#include <stdio.h>

int main()
{
    float c, p;
    scanf("%f", &p);

    c = p * 2.54;

    printf("%f\n", c);

    return 0;
}