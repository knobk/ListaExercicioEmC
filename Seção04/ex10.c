//Faça um programa que receba altura eo sexo de uma pessoa e clcule e mostre seu peso ideal, utilizando as seguintes formulas (onde h corresponde a altura):
//Homens: (72.7*h) - 58
//Mulheres: (62.2*h) - 44.7

#include <stdio.h>

int main()
{
    float altura, pesoIdeal;
    char sexo;

    printf("Informe seu sexo (M ou F): ");
    scanf("%c", &sexo);

    if (sexo == 'M' || sexo == 'F')
    {
        printf("Informe sua altura: ");
        scanf("%f", &altura);

        if (sexo == 'M')
        {
            pesoIdeal = (72.7 * altura) - 58;
        }
        else
        {
            pesoIdeal = (62.2 * altura) - 44.7;
        }

        printf("Peso ideal: %.1f kg\n", pesoIdeal);
    }
    else
    {
        printf("Sexo inválido.\n");
    }

    return 0;
}