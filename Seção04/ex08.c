//Faça um programa que leia 2 notas de um aluno, verifique se as natas são válidas exiba na tela a mádia destas notas.
//Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota não possua um valor válido,
//este fato deve ser informado ao usuário e o programa termina.

#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Informe a 1ª nota: ");
    scanf("%f", &nota1);

    if (nota1 >= 0.0 && nota1 <= 10.0)
    {
        printf("Informe a 2ª nota: ");
        scanf("%f", &nota2);
        if (nota2 >= 0.0 && nota2 <= 10.0)
        {
            media = (nota1 + nota2) / 2.0;
            printf("Média: %.1f\n", media);
        }
        else
        {
            printf("2ª Nota inválida\n");
        }
    }
    else
    {
        printf("1ª nota inválida\n");
    }

    return 0;
}