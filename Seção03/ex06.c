// Leia uma temperatura em grau s Celsius e apresente-a convertida em graus 
// Fahrenheit. A fórmula de conversã o é: F = C * (9,0/5,0) + 32,0, sendo F a 
// temperatura em Fahrenheit e C a temperatura em Celsiu s. 

#include <stdio.h>

int main()
{
    float f, c = 10.0;

    f = c * (9.0 / 5.0) + 32.0;

    printf("%f\n", f);

    return 0;
}