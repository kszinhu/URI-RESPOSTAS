/* 1024 - Criptografia
> Cassiano Rodrigues
> 21/07/2020
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    int n, i, j, x, aux1, aux2;
    char linha[1001], aux;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %[^\n]s\n", &linha); /* Estava dando 'Presentation error' */
        x = strlen(linha);
        for (j = 0; j < (strlen(linha)); j++)
        {
            if ((linha[j] >= 'A') && (linha[j] <= 'Z'))
            {
                linha[j] = linha[j] + 3;
            }
            else if ((linha[j] >= 'a') && (linha[j] <= 'z'))
            {
                linha[j] = linha[j] + 3;
            }
        }
        for (j = 0; j < (strlen(linha) / 2); j++)
        {
            aux = linha[j];
            linha[j] = linha[((strlen(linha)) - 1 - j)];
            linha[((strlen(linha)) - 1 - j)] = aux;
        }
        for (j = (strlen(linha) / 2); j < (strlen(linha)); j++)
        {
            linha[j] = linha[j] - 1;
        }
        printf("%s\n", linha);
    }
    system("pause");
}