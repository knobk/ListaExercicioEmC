// Leia um valor de área em metros quadrados m2 e apresente-o convertido em
// hectares. A fórmula de conversão é: HH = M * 0,0001, sendo M a área em metros
// quadrados e H a área em hectares.

#include <stdio.h>

int main()
{
    float hh, m;
    scanf("%f", &m);

    hh = m * 0.0001;

    printf("%f\n", hh);

    return 0;
}