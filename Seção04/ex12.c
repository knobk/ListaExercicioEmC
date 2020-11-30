//Ler um número inteiro. Se o número lido for nagativo, escreva a mensagem "Número inválido".
//Se o número for positivo, calcular o logaritmo deste número.

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float logaritmo;

    printf("Informe um número: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Número inválido\n");
    }
    else
    {
        logaritmo = log(num);
        printf("Log(%d)= %f\n", num, logaritmo);
    }

    return 0;
}