// Faça um programa que leia o horário (hora, minuto e segundo) de início e a
// duração em segundos, de uma experiência biológica. O programa deve resultar
// com o novo horário (hora, minuto e segundo) do término da mesma.

#include <stdio.h>

int main()
{
    int hora, minuto, segundo, duracao;

    printf("Informe o horário de início da experiência. \nhh mm ss: ");
    scanf("%d%d%d", &hora, &minuto, &segundo);

    printf("Informe em segundos quanto tempo durou a experiência: ");
    scanf("%d", &duracao);

    duracao += hora * 3600; //ler hora inicial, converte para segundos e adiciona ao tempo de duração
    duracao += minuto * 60; // ler minuto inicial, converte para segundos e adiciona ao tempo de duração
    duracao += segundo; // ler segundo inicial e adiciona ao tempo de duração

    //Converte duração total em hh:mm:ss
    hora = duracao / 3600;
    minuto = (duracao % 3600) / 60;
    segundo = (duracao % 3600) % 60;

    printf("A experiência terminou às %d:%d:%d \n", hora, minuto, segundo);

    return 0;
}