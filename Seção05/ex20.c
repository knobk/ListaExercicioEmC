// Ler uma sequência de números inteiros e determinar se eles são pares ou não. Deverá
// ser informado o número de dados lidos e número de valores pares. O processo termina
// quando for digitado o número 1000.

#include <stdio.h>

int main()
{
    int n, cont = 0, contPar = 0;;

    while (n != 1000)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            printf("É par\n");
            contPar++;
        }
        else
        {
            printf("É ímpar\n");
        }

        cont++;
    }

    printf("Número de dados lidos: %d\n", cont);
    printf("Número de valores pares: %d\n", contPar);

    return 0;
}