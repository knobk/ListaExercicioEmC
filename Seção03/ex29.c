// Leia quatro notas, calcule a média aritmética e mostre o resultado.

#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, media = 0.0;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("%f\n", media);

    return 0;
}