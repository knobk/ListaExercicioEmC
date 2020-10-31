// Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.

#include <stdio.h>
#include <math.h>

int main()
{
    double num;

    printf("Informe um número: ");
    scanf("%lf", &num);

    if (num > 0)
    {
        num = sqrt(num);
        printf("%lf\n", num);
    }
    else
    {
        printf("Número inválido.\n");
    }

    return 0;
}