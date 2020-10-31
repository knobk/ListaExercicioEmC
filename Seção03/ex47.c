// Leia um número inteiro de 4 dígitos (de 1000 a 9999) e mostre 1 dígito por linha.

#include <stdio.h>

int main()
{
    int num, milhar, centena, dezena, unidade;

    printf("Informe um número de 4 dígitos: ");
    scanf("%d", &num);

    unidade = num % 10;
    dezena = (num / 10) % 10;
    centena = ((num / 10) / 10) % 10;
    milhar = (((num / 10) / 10) / 10) % 10;

    printf("%d\n", milhar);
    printf("%d\n", centena);
    printf("%d\n", dezena);
    printf("%d\n", unidade);

    return 0;
}