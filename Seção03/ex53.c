// Faça um programa para ler as dimensões de um terreno (comprimento e largura),
// bem como o preço do metro de tela. Mostre o custo para cercar este mesmo
// terreno com tela.

#include <stdio.h>

int main()
{
    float comprimento, largura, precoTela, custo;

    printf("Comprimento do terreno: ");
    scanf("%f", &comprimento);
    printf("Largura do terreno: ");
    scanf("%f", &largura);
    printf("Preço da tela: R$");
    scanf("%f", &precoTela);

    custo = comprimento * largura * precoTela;

    printf("Custo para cercar terreno: R$%.2f\n",custo);

    return 0;
}