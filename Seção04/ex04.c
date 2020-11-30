// Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre.
// O número digitado ao quadrado.
// A raiz quadrada do número digitado.

#include <stdio.h>
#include <math.h>

int main()
{
    float numero;

    printf("Informe um número: ");
    scanf("%f", &numero);

    if (numero > 0)
    {
        printf("Quadrado = %.1f\n", pow(numero, 2.0));
        printf("Raiz quadrada = %.1f\n", sqrt(numero));
    }

    return 0;
}
