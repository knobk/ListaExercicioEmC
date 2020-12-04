//Usando switch, escreva um programa que leia um núumero inteiro entre 1 e 12 e imprima o mês correspondente a este número;
//Isto é, janeiro se 1, fevereiro se2, e assim por diante.

#include <stdio.h>

int main()
{
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Janeiro\n");
        break;
    case 2:
        printf("Fevereiro\n");
        break;
    case 3:
        printf("Março\n");
        break;
    case 4:
        printf("Abril\n");
        break;
    case 5:
        printf("Maio\n");
        break;
    case 6:
        printf("Junho\n");
        break;
    case 7:
        printf("Julho\n");
        break;
    case 8:
        printf("Agosto\n");
        break;
    case 9:
        printf("Setembro\n");
        break;
    case 10:
        printf("Outubro\n");
        break;
    case 11:
        printf("Novembro\n");
        break;
    case 12:
        printf("Dezembro\n");
        break;

    default:
        printf("Número inválido\n");
        break;
    }

    return 0;
}