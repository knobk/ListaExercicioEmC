// Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999).
// Gere outro número formado pelos dígitos invertidos do número lido.
// Exemplo: Número Lido = 123 e Número Gerado = 321.

#include <stdio.h>

int main()
{
    int numero, unidade, centena, dezena;
    printf("Informe um número entre 100 e 999: ");
    scanf("%d", &numero);

    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = (numero / 10) / 10;

    printf("%d%d%d\n", unidade, dezena, centena);

    return 0;
}