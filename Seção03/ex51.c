// Escreva um programa que leia as coordenadas x e y de pontos no R² e calcule sua
// distância da origem (0,0).

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, r;
    
    printf("Informe a posição de X: ");
    scanf("%lf", &x);
    printf("Informe a posição de Y: ");
    scanf("%lf", &y);

    r = sqrt(pow(x, 2.0) + pow(y, 2.0));

    printf("A distância entre a origem e as coordenadas é: %.2lf\n", r);

    return 0;
}