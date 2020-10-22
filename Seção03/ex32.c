// Leia um número inteiro e escreva a soma do sucessor de seu triplo com o
// antecessor de seu dobro.

#include <stdio.h>

int main()
{
    int n, t, d, soma;
    scanf("%d", &n);

    d = n * 2;
    t = n * 3;
    soma = (t + 1) + (d - 1);

    printf("Soma %d\n", soma);

    return 0;
}