// Leia o salário de um funcionário. Calcule e mostre o valor do novo salário, sabendo
// que ele recebeu um aumento de 25%.

#include <stdio.h>

int main()
{
    float salario;

    printf("Salário: R$ ");
    scanf("%f", &salario);

    salario += salario * 0.25;

    printf("Novo salário: R$ %.2f\n", salario);

    return 0;
}