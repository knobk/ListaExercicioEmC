// Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
// (hipotenusa)² = a² + b². Faça u m programa que receba os valores de a e b calcule
// o valor da hipotenusa através da equação. Mostre o resultado dessa operação.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, h;

    printf("Informe os catetos A e B: ");
    scanf("%f%f", &a, &b);

    h = pow(a, 2) + pow(b, 2);
    h = sqrt(h);

    printf("Hipotenusa: %f \n", h);

    return 0;
}