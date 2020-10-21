// Escreva um algoritimo que leia um número inteiro entre 100 e 999 e imprima na saída
// cada um dos algarismos que compõem o número.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n < 100 || n > 999)
    {
        printf("Informe um número entre 100 e 999: ");
        scanf("%d", &n);
    }
    while (n > 0)
    {
        printf("%d \n", n % 10); //imprime resto da divisão do n por 10
        n /= 10; // Ler quociente de n divindo por 10
    }

    return 0;
}