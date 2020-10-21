// Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>

int main()
{
    int i, soma;
    
    for (i = 0; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
    }
    printf("%d\n", soma);

    return 0;
}