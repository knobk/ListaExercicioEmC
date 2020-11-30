// A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalhado de laboratório,
// a uma avaliação semestral e a um exame final. A média das três notas mencionados anteriormente obedece aos pesos: Trabalho Laboratório: 2;
// Avaliação Semestral: 3 Exame Final: 5. De acorde com o resultado, mostre na tela se o aluno está reprovado(média entra 0 e 2.9),
//de recuperação (entre 3 e 4.9) ou se foi aprovado. Faça todas as verificações necessárias.

#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Informe a nota do trabalho de laboratório: ");
    scanf("%f", &nota1);
    if (nota1 >= 0 && nota1 <= 10)
    {
        printf("Informe a nota da avaliação semestral: ");
        scanf("%f", &nota2);
        if (nota2 >= 0 && nota2 <= 10)
        {
            printf("Informe a nota do exame final: ");
            scanf("%f", &nota3);
            if (nota3 >= 0 && nota3 <= 10)
            {
                media = (nota1 * 2.0 + nota2 * 3.0 + nota3 * 5.0) / 10.0;
                printf("Média: %.1f\n", media);

                if (media >= 0 && media <= 2.9)
                {
                    printf("Reprovado\n");
                }
                else if (media >= 3 && media <= 4.9)
                {
                    printf("Recuperação\n");
                }
                else
                {
                    printf("Aprovado\n");
                }
            }
            else
            {
                printf("Nota inválida\n");
            }
        }
        else
        {
            printf("Nota inválida\n");
        }
    }
    else
    {
        printf("Nota inválida\n");
    }

    return 0;
}