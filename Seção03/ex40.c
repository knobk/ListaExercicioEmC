// Uma empresa contrata um encanador a R$ 30 ,00 por dia. Faça um programa que
// solicite o número de dias trabalhados pelo encanador e mostre a quantia líquida
// que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda.

#include <stdio.h>

int main()
{
    int dias;
    float diaria = 30.0, salario;

    printf("Informe quatos dias trabalhados: ");
    scanf("%d", &dias);

    salario = (float)dias * diaria;
    salario -= salario * 0.08;

    printf("Quantia líquida: R$ %.2f\n", salario);

    return 0;
}
