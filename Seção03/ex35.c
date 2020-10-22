// Leia o valor do raio de um círculo e calcule e mostre a área do círculo
// correspondente. A área do círculo é: Pi * R², onde R é o raio e Pi = 3,14.

#include <stdio.h>

int main()
{
    float area, r, pi = 3.14;

    printf("Raio: ");
    scanf("%f", &r);

    area = pi * r * r;

    printf("Área do círculo: %f\n", area);

    return 0;
}
