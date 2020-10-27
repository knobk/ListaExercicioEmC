// Faça um programa para converter uma letra maiúscula em letra minúscula. Use a
// tabela ASCII para resolver o problema.

#include <stdio.h>

int main()
{
    char letra;
    printf("Informe uma letra minúscula: ");
    scanf("%c", &letra);

    letra -= 32;

    printf("Letra MAIÚSCULA: %c\n", letra);

    return 0;
}
