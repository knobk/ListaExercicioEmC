//Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas(as básicas, por exemplo).
//O usuário escolhe uma das opçoes e o seu programa então pede dois valores numéricos e realiza a operação, mostrnado o resultado e saindo.

#include <stdio.h>

int main()
{
    int operacao;
    float num1, num2, resultado;

    printf("Escolha uma operação:\n");
    printf("1- Soma\n");
    printf("2- Subtração\n");
    printf("3- Multiplicação\n");
    printf("4- Divisão\n");

    printf("Operação: ");
    scanf("%d", &operacao);

    if (operacao > 0 && operacao < 5)
    {
        printf("Informe o 1º número: ");
        scanf("%f", &num1);

        printf("Informe o 2º número: ");
        scanf("%f", &num2);

        switch (operacao)
        {
        case 1:
            resultado = num1 + num2;
            break;
        case 2:
            resultado = num1 - num2;
            break;
        case 3:
            resultado = num1 * num2;
            break;
        case 4:
            resultado = num1 / num2;
            break;
        }

        printf("Resultado: %.1f\n", resultado);
    }
    else
    {
        printf("Opção inválida\n");
    }
    
    return 0;
}