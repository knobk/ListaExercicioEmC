// Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores ´
// desse numero, com excec¸ ´ ao dele pr ˜ oprio. Ex: a soma dos divisores do n ´ umero 66 ´ e´
// 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78

#include <stdio.h>

int main()
{
    int n, i, soma = 0;

    printf("Insira um número positivo: ");
    scanf("%d", &n);
    
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }
    
    printf("Soma dos divisores de %d é %d: \n", n, soma);

    return 0;
}