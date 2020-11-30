//Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mansagem "Números iguais".

#include <stdio.h>

int main()
{
    int num1, num2, maior;

    printf("Informe dois números: ");
    scanf("%d%d", &num1, &num2);

    if (num1 == num2)
    {
        printf("Números iguais\n");
    }
    else
    {
        maior = num1;

        if (num2 > num1)
        {
            maior = num2;
        }

        printf("Maior: %d\n", maior);
    }

    return 0;
}