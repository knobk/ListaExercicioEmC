// Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
// • O total a pagar com desconto de 10%;
// • O valor de cada parcela, no parcelamento de 3 vezes, sem juros;
// • A comissão do vendedor , no caso de a venda ser a vista (5% sobre o valor com desconto).
// • A comissão do vendedor , no caso de a venda ser parcelada (5% sobre o valor total).

#include <stdio.h>

int main()
{
    float valor, desconto;

    printf("Informe o valor: R$ ");
    scanf("%f", &valor);

    desconto = valor - valor * 0.10;

    printf("Total a pagar com desconto de 10%%: R$ %.2f\n", desconto);
    printf("Valor de cada parcela, no parcelamento de 3 vezes, sem juros: R$ %.2f\n", valor / 3.0);
    printf("Comissão do vendedor, no caso de a venda ser a vista: R$ %.2f\n", desconto * 0.05);
    printf("comissão do vendedor, no caso de a venda ser parcelada: R$ %.2f\n", valor * 0.05);

    return 0;
}