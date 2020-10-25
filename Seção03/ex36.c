// Leia a altura e o raio de um cilindro circular e mostre o volume do cilindro. O
// volume de um cilindro circular é calculado por meio da seguinte fórmula: V = Pi *
// R² * H, onde Pi= 3,14, R = raio e H = altura.

#include <stdio.h>

int main()
{
    float altura, raio, volume, pi = 3.14;
    
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Raio: ");
    scanf("%f", &raio);

    volume = pi * (raio * raio) * altura;

    printf("Volume: %f \n", volume);

    return 0;
}