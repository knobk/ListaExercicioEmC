//Faça um programa que calcule e mostre a área de um trapezio. Sabe-se que: A= ((basemaior + basemenor) * altura) / 2.
// Lembre-se a base maior e a base menor devem ser números maiores que zero.

#include <stdio.h>

int main()
{
    float baseMaior, baseMenor, altura, area;

    printf("Base maior: ");
    scanf("%f", &baseMaior);

    if (baseMaior > 0)
    {
        printf("Base menor: ");
        scanf("%f", &baseMenor);

        if (baseMenor > 0)
        {
            printf("Altura: ");
            scanf("%f", &altura);

            area = ((baseMaior + baseMenor) * altura) / 2.0;

            printf("Área trapézio: %.1f\n", area);
        }
        else
        {
            printf("Informe base maior que zero\n");
        }
    }
    else
    {
        printf("Informe base maior que zero\n");
    }

    return 0;
}