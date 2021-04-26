/*
1800 - Onde Estão Minhas Chaves
> Cassiano Rodrigues
> 27/11/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    int vetor[1100], i, j, q, e, csi;

    while (scanf("%d %d", &q, &e) != EOF)
    {
        for (i = 0; i < e; i++)
        {
            scanf("%d", &csi);
            vetor[csi] = csi; // Alocar Informações
        }
        for (i = 0; i < q; i++)
        {
            scanf("%d", &csi);
            if (csi == vetor[csi]) // Verifica Alocações
            {
                printf("0\n");
            }
            else
            {
                printf("1\n");
                vetor[csi] = csi;
            }
        }
    }
    system("pause");
}