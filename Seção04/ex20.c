// Dados três valores A, B, C verificar se eles podem ser valores dos lados de um triâgulo e, se forem,
//se é um triângulo escaleno, equilátero ou isóscele, considere os seguintes conceitos:
//O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
//Chama-se equilátero o triângulo que tem três lados iguais.
//Denominam-se isóseles o triângulo que tem o comprimento de dois lados iguais.
//Recebe o nome de escaleno o triângulo que tem os três lados diferentes.

#include <stdio.h>

int main(void)
{
    float a, b, c;

    printf("Informe o valor de lado A: ");
    scanf("%f", &a);

    printf("Informe o valor de lado B: ");
    scanf("%f", &b);

    printf("Informe o valor de lado C: ");
    scanf("%f", &c);

    if (a < (b + c) && b < (a + c) && c < (a + b))
    {
        printf("Valores formam triâgulo.\n");
        if (a == b && b == c)
        {
            printf("Equilátero\n");
        }
        else if (a != b && b != c && c != a)
        {
            printf("Escaleno\n");
        }
        else
        {
            printf("Isóseles\n");
        }
    }
    else
    {
        printf("Valores não formam triâgulo.\n");
    }

    return 0;
}