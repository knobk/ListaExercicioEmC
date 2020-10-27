// Receba o salário-base de um funcionário. Calcule e mostre o salário a receber,
// sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base .
// Além disso, ele paga 7% de imposto de renda sobre o salário-base.

#include <stdio.h>

int main()
{
    float salario_base, gratificacao, imposto, total;

    printf("Salário base: R$ ");
    scanf("%f", &salario_base);

    imposto = salario_base * 0.07;
    gratificacao = salario_base * 0.05;
    total = salario_base - imposto + gratificacao;

    printf("Salário a receber: R$ %.2f \n", total);

    return 0;
}
