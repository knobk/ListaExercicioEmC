//  A importância de R$ 780000,00 será dividida entre três ganhadores de um
// concurso. Sendo que, da quantia total:
// • O primeiro ganhador receberá 46%;
// • O segundo receberá 32%;
// • O terceiro receberá o restante;
//     Calcule e mostre a quantia ganha por cada um dos ganhadores.

#include <stdio.h>

int main()
{
    float total = 780000.0, pri, seg, tec;

    pri = total * 0.46;
    seg = total * 0.32;
    tec = total - pri - seg;

    printf("Primeiro: R$ %.2f\n", pri);
    printf("Segundo: R$ %.2f\n", seg);
    printf("Terceiro: R$ %.2f\n", tec);
    
    return 0;
}
