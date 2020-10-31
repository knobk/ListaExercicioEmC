// Leia um valor inteiro em segundos, e mostre-o em horas, minutos e segundos.

#include <stdio.h>

int main()
{
    int valor, horas, minutos, segundos;

    printf("Informe o valor em segundos: ");
    scanf("%d", &valor);

    horas = valor / 3600;
    minutos = (valor % 3600) / 60;
    segundos = (valor % 3600) % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}