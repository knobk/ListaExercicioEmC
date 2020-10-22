// Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
// uma sequência arbitrária de notas(válidas no intervalo de 10 a 20) e que mostre na tela,
// como resultado, a correspondente média aritmética. O número de notas com que o aluno
// pretende efetuar o cálculo não será fornecido ao programa, o qual terminara quando for
// introduzido um valor que não seja válido como nota de aprovação.

#include <stdio.h>

int main()
{
    int nota = 0, cont = 0, media, soma = 0;

    printf("Digite %dº nota: ", cont + 1);
    scanf("%d", &nota);

    if (nota >= 10 && nota <= 20)
    {
        while (nota >= 10 && nota <= 20)
        {
            soma += nota;
            cont++;
            printf("Digite %dº nota: ", cont + 1);
            scanf("%d", &nota);
            if (nota > 20 || nota < 10)
            {
                printf("Valor inválido\n");
            }
        }
        printf("Média das notas válidas: %d\n", soma / cont);
    }
    else
    {
        printf("Valor inválido\n");
    }

    return 0;
}