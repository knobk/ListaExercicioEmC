#include <stdio.h>

int main()
{
    float g, r, pi = 3.14;
    scanf("%f", &g);
    
    r = g * pi / 180.0;

    printf("%f\n", r);

    return 0;
}