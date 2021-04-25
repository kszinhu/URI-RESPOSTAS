/* 1437 - Esquerda, Volver!
> Cassiano Rodrigues
> 18/09/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

main()
{
    int quantidade, n = 1, decider, i;
    char comandos[1001];
    while (n != 0)
    {
        scanf("%d", &n);
        if (n != 0)
        {
            decider = 1;
            scanf("%s", &comandos);
            for (i = 0; i < strlen(comandos); i++)
            {
                if (comandos[i] == 'D')
                {
                    if (decider == 1)
                    {
                        decider = 4;
                    }
                    else
                    {
                        decider--;
                    }
                }
                if (comandos[i] == 'E')
                {
                    if (decider == 4)
                    {
                        decider = 1;
                    }
                    else
                    {
                        decider++;
                    }
                }
            }
            if (decider == 1)
            {
                printf("N\n");
            }
            else if (decider == 4)
            {
                printf("L\n");
            }
            else if (decider == 3)
            {
                printf("S\n");
            }
            else if (decider == 2)
            {
                printf("O\n");
            }
        }
    }
    system("pause");
}