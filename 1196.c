/*
1196 - WERTYU
> Cassiano Rodrigues
> 27/11/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    int i, j;
    char entrada[1000], teclado[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    while (fgets(entrada, 1000, stdin) != NULL)
    {
        int quant = strlen(entrada);
        for (i = 0; i < quant; i++)
        {
            for (j = 0; j < 48; j++)
            {
                if (entrada[i] == teclado[j])
                {
                    printf("%c", teclado[j - 1]); // tecla anterior
                    break;
                }
                else if (entrada[i] == ' ')
                {

                    printf(" ");
                    break;
                }
                else if (entrada[i] == '\n')
                {

                    printf("\n");
                    break;
                }
            }
        }
    }
    system("pause");
}
