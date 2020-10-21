// Leia um valor de área em hectares e apresenta-o convertido em metros quadrados
// m2. A fórmula de conversão é: M = HH * 10000 , sendo M a área em metros
// quadrados e H a área em hectares. 

#include <stdio.h>

int main()
{
    float hh, m;
    scanf("%f", &hh);

    m = hh * 10000;

    printf("%f\n", m);

    return 0;
}