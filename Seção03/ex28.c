// Faça a leitura de três valores e apresente como resultado a soma dos quadrados
// dos três valores lidos.

#include <stdio.h>

int main()
{
    int v1, v2, v3, result = 0;
    scanf("%d%d%d", &v1, &v2, &v3);

    result = (v1 * v1) + (v2 * v2) + (v3 * v3);

    printf("%d\n", result);

    return 0;
}
