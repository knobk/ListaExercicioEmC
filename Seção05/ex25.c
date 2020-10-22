// Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos
// de 3 ou 5.

#include <stdio.h>

int main()
{
    int i, soma = 0;

    for (i = 0; i < 1000; i++)
    {
        if ((i % 3) == 0 || (i % 5) == 0)
        {
            soma += i;
        }
    }

    printf("Resultado: %d\n", soma);

    return 0;
}