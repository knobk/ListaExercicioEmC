// Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
// uma sequência arbitrária de notas(válidas no intervalo de 10 a 20) e que mostre na tela,
// como resultado, a correspondente média aritmética. O número de notas com que o aluno
// pretende efetuar o cálculo não será fornecido ao programa, o qual terminara quando for
// introduzido um valor que não seja válido como nota de aprovação.

#include <stdio.h>

int main()
{
    int nota = 0, cont = 1, media, soma = 0;

    printf("Digite %dº nota: ", cont);
    scanf("%d", &nota);

    // if (nota < 10 || nota > 20)
    // {
    //     printf("Valor inválido\n");
    // }

    while (nota >= 10 && nota <= 20)
    {   
        cont++;
        printf("Digite %dº nota: ", cont);
        scanf("%d", &nota);
        printf("%d\n", nota);
    }

    //     soma += nota;
    //     cont++;

    return 0;
}