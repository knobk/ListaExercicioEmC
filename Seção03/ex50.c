// Implemente um programa que calcule o ano de nascimento de uma pessoa a partir
// de sua idade e do ano atual.

#include <stdio.h>

int main()
{
    int anoNascimento, idade, anoAtual;

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("Você nasceu no ano de %d\n", anoNascimento);

    return 0;
}