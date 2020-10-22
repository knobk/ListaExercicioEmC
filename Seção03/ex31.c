// Leia um número inteiro e escreva o seu antecessor e o seu sucessor.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", n - 1);
    printf("%d\n", n + 1);

    return 0;
}