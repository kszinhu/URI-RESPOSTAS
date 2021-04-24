/* 1107 - Escultura à Laser
> Cassiano Rodrigues
> 04/12/2020
 */
#include <stdio.h>
#include <stdlib.h>

main()
{
    int altura, comprimento, i, xi, xanterior = 0, quant = 0;
    scanf("%d", &altura);
    scanf("%d", &comprimento);
    if ((altura == 0) && (comprimento == 0))
    {
        break;
    }
    for (i = 0; i < comprimento; i++)
    {
        scanf("%d", &xi);
        if (i == 0)
        {
            quant += altura - xi;
        }
        else if (xi < xanterior)
        {
            quant += xanterior - xi
        }
        xanterior = x;
    }
    printf("%d\n", quant);
}