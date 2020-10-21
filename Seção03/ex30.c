// Leia um valor em real e a cotação do dólar. Em seguida, escreva o valor
// correspondente em dólares.

#include <stdio.h>

int main()
{
    float real, cotacao, dolar;
    scanf("%f%f", &real, &cotacao);

    dolar = real * cotacao;

    printf("%f\n", dolar);

    return 0;
}