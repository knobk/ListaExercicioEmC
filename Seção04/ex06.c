//Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos.

#include <stdio.h>

int main()
{
    int num1, num2, menor, maior, diferenca;

    printf("Informe dos número inteiros: ");
    scanf("%d%d", &num1, &num2);

    maior = num1;
    menor = num2;

    if (num2 > num1)
    {
        maior = num2;
        menor = num1;
    }

    diferenca = maior - menor;
    
    printf("Maior: %d\n", maior);
    printf("Diferença: %d\n", diferenca);

    return 0;
}