// Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
// proporcionalmente ao valor que cada deu para a realização da aposta. Faça um
// programa que leia quanto cada apostador investiu, o valor do prêmio, e mostre
// quanto cada um ganharia do prêmio, com base no valor investido.

#include <stdio.h>

int main()
{
    float valorDoPremio, valorJogador1, valorJogador2, valorJogador3, totalJogado, x1, x2, x3;

    printf("Informe o valor do premio: R$");
    scanf("%f", &valorDoPremio);
    printf("Aposta do 1º jogador: R$");
    scanf("%f", &valorJogador1);
    printf("Aposta do 2º jogador: R$");
    scanf("%f", &valorJogador2);
    printf("Aposta do 3º jogador: R$");
    scanf("%f", &valorJogador3);

    //soma dos valores jogado
    totalJogado = valorJogador1 + valorJogador2 + valorJogador3;

    //porcentagem de cada jogador
    x1 = valorJogador1 * 100.0 / totalJogado;
    x2 = valorJogador2 * 100.0 / totalJogado;
    x3 = valorJogador3 * 100.0 / totalJogado;

    //valor do premio de cada jogador baseado na porcentagem
    valorJogador1 = valorDoPremio * x1 / 100;
    valorJogador2 = valorDoPremio * x2 / 100;
    valorJogador3 = valorDoPremio * x3 / 100;

    printf("\nO 1º jogador ganharia o premio de R$%.2f\n", valorJogador1);
    printf("O 2º jogador ganharia o premio de R$%.2f\n", valorJogador2);
    printf("O 3º jogador ganharia o premio de R$%.2f\n", valorJogador3);

    return 0;
}