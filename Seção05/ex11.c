//Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);

    while (n < 0)
    {
        printf("Insira um número positivo: ");
        scanf("%d", &n);
    }
    
    for ( i = 0; i <= n; i++)
    {
        printf("%d\n", i);
    }    

    return 0;
}