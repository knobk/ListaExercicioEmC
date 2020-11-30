//Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior de 20% do salário imprima:
//Empréstimo não concedido, caso contrario imprima: Empréstimo concedido.

#include <stdio.h>

int main()
{
    float salario, prestacao;

    printf("Informe o salário: R$");
    scanf("%f", &salario);
    printf("Informe o valor da prestação: R$");
    scanf("%f", &prestacao);

    if (prestacao > salario * 0.2)
    {
        printf("Empréstimo não concedido\n");
    }
    else
    {
        printf("Empréstimo concedido\n");
    }

    return 0;
}