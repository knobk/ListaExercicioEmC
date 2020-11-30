// Escreva um programa que leia um número interiro maior que zero e devolva, na tela, a soma de todos os seus algarismos.
// Por exemplo, ao número 251 correspondeá o valor 8(2 + 5 + 1). Se o número lido não for maior de que zero, o programa terminará com a mensagem "Número inválido"

#include <stdio.h>

int main()
{
    int num, soma = 0;

    printf("Informe um númeo: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Número inválido\n");
    }
    else
    {
        while (num > 0)
        {
            soma += num % 10;
            num /= 10;
        }

        printf("Soma dos algarismos: %d\n", soma);
    }

    return 0;
}