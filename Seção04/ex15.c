//Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este número.
//Isto é, domingo se 1, segunda-feira se 2, e assim por diante.

#include <stdio.h>

int main()
{
    int num;
    
    printf("Informe um número: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sábado\n");
        break;
    default:
        printf("Número inválido\n");
        break;
    }

    return 0;
}