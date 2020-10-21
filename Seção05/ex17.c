//Faça um programa que leia um número inteiro positivo N e calcule e soma dos primeiros números naturais.

#include <stdio.h>

int main() {
    int i, n, soma = 0;
    scanf("%d", &n);

    while (n < 0)
    {
        printf("Insira um número positivo: ");
        scanf("%d", &n);
    }
    
    for ( i = 0; i <= n; i++)
    {
        soma += i;
    }    

    printf("%d\n", soma);

    return 0;
}