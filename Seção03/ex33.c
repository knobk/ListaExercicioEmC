// Leia o tamanho do lado de um quadrado e escreva como resultado a sua área.

#include <stdio.h>

int main()
{
    int l, a;

    printf("Lado: ");
    scanf("%d", &l);

    a = l * l;

    printf("Área: %d\n", a);

    return 0;
}