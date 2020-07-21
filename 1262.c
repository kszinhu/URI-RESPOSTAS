/*
1262 - Leitura Múltipla
> Cassiano Rodrigues
> 21/07/2020
*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    int p, processos, contador, i, j;
    char linha[51];

    while (scanf("%s", linha) != EOF)
    {
        scanf("%d", &p);
        processos = 0;
        contador = 0; /* Ciclos */
        for (i = 0; linha[i] != '\0'; i++)
        {
            if (linha[i] == 'W')
            {
                contador++;
                if (processos > 0)
                {
                    processos = 0;
                    contador++;
                }
            }
            else
            {
                processos++;
                if (processos == p)
                {
                    contador++;
                    processos = 0;
                }
            }
        }
        if (processos > 0)
            contador++;
        printf("%d\n", contador);
    }
    system("pause");
}
