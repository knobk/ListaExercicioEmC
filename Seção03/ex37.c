// Faça um programa que leia o valor de um produto e mostre o valor com desconto,
// tendo em vista que o desconto foi de 12%.

#include <stdio.h>

int main()
{
    float valor;

    printf("Valor: R$ ");
    scanf("%f", &valor);

    valor += valor * 0.12;

    printf("Valor com 12%% de desconto: R$ %.2f \n", valor);

    return 0;
}
