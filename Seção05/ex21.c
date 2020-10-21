// Faça um programa que receba dois números. Calcule e mostre:
// a soma dos números pares desse intervalo, incluindo os números digitados;
// a multiplicação dos números ímpares desse intervalo, incluindo os números digitados.

#include <stdio.h>

int main()
{
    int n1, n2, i, aux, somaPares = 0, multiImpares = 1;
    
    printf("Digite dois números: ");
    scanf("%d%d", &n1, &n2);

    if (n2 < n1)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    for (i = n1; i <= n2; i++)
    {
        if (i % 2 == 0)
        {
            somaPares += i;
        }
        else
        {
            multiImpares *= i;
        }
    }

    printf("Soma dos pares: %d\n", somaPares);
    printf("Multiplicação dos ímpares: %d\n", multiImpares);

    return 0;
}