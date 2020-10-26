// Faça um programa que leia o valor da hora de trabalho (em reais) e o número de
// horas trabalhadas no mês. Mostre o valor a ser pago ao funcionário, adicionando
// 10% sobre o valor calculado .

#include <stdio.h>

int main()
{
    float valorHora, salario;
    int numeroHoras;

    printf("Valor da hora trabalhada: ");
    scanf("%f", &valorHora);
    printf("Número de horas tranalhada: ");
    scanf("%d", &numeroHoras);

    salario = (float)valorHora * numeroHoras;
    salario += salario * 0.10;

    printf("Salário: R$ %.2f \n", salario);

    return 0;
}