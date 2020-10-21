// Escreva um algoritimo que leia certa quantidade de números e imprima o maior deles e quantas vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecido pelo usuário.

#include <stdio.h>

int main()
{
    int qtd, i, n, maior = 0, cont = 0;
    printf("Informe a qantidade de numeros a serem lidos: ");
    scanf("%d", &qtd);

    for (i = 1; i <= qtd; i++)
    {
        printf("Informe o %dº número: ", i);
        scanf("%d", &n);
        if (n > maior)
        {
            maior = n;
            cont++;
        }
    }

    printf("Maior: %d. \n", maior);
    printf("Maior foi lido %d vezes. \n", cont);

    return 0;
}