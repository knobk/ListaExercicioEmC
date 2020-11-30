//Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e segunda tem peso 1 e a terceira tem peso 2.
//Ao final, mostar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou superior a 60 pontos.

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Informe a 1ª nota: ");
    scanf("%f", &nota1);
    printf("Informe a 2ª nota: ");
    scanf("%f", &nota2);
    printf("Informe a 3ª nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3 * 2.0) / 4.0;

    printf("Média: %.1f\n", media);

    if (media >= 60.0)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");
    }

    return 0;
}