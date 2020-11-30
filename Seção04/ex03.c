// Leia um número real. Se o número for positivo imprima a raiz quadrada. De contrário, imprima o número ao quadrado.

#include <stdio.h>
#include <math.h>

int main()
{
    float numero;

    printf("Informe um número real: ");
    scanf("%f", &numero);

    if (numero > 0)
    {
        numero = sqrt(numero);
    }
    else
    {
        numero = pow(numero, 2.0);
    }

    printf("Resultado = %.1f\n", numero);

    return 0;
}