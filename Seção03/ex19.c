// Leia um valor de volume em lit ros e apresente-o convertido em metros cúbicos m3. A fórmula de conversão é: M = L / 1000 , sendo L o volume em litros e M o volume em metros cúbicos.

#include <stdio.h>

int main()
{
    float l, m;
    scanf("%f", &l);

    m = l / 1000.0;

    printf("%f\n", m);

    return 0;
}