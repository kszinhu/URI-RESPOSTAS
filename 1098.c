#include <stdio.h>

/* 1098 - Sequencia IJ 4
> Cassiano Rodrigues
> Não lembro a data
*/

main()
{
    float I, J, valor;
    int aux1, aux2;
    for (I = 0, J = 1, valor = 0, aux1 = 0, aux2 = 0; I < 2.2; J++)
    {
        if (aux2 == 0)
        {
            printf("I=%.0f J=%.0f\n", I, J);
        }
        else
        {
            printf("I=%.1f J=%.1f\n", I, J);
        }
        aux1++;
        if (aux1 == 3)
        {
            I += 0.2;
            valor += 0.2;
            J = valor;
            aux1 = 0;
            aux2++;
        }
        if (aux2 == 5)
            aux2 = 0;
    }
    system("pause");
}