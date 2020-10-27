// Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar
// subindo a escada . Calcule e mostre quantos degraus o usuário deverá subir para atingir
// o objetivo.

#include <stdio.h>

int main()
{
    float tamanho_degrau, percurso_escada, qtd_degrau;

    printf("Altura do degrau: ");
    scanf("%f", &tamanho_degrau);

    printf("Altura à alcançar: ");
    scanf("%f", &percurso_escada);

    qtd_degrau = percurso_escada / tamanho_degrau;

    printf("Quantidade de degraus: %.0f\n", qtd_degrau);

    return 0;
}