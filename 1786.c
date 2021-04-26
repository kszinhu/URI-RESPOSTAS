/*
1786 - CPF 2
> Cassiano Rodrigues
> 06/11/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void conv(char *str, short vet[])
{
    int i;
    for (i = 0; i < 9; i++)
    {
        vet[i] = ((int)str[i] - 48);
    }
}

main()
{
    char lecpf[10];
    short numCPF[9]; // Int, alterava valor
    int digA = 0, digB = 0;
    unsigned i, j, k;

    while (scanf(" %s", lecpf) != EOF)
    {
        conv(lecpf, numCPF);
        digA = 0;
        digB = 0;

        for (i = 0, j = 1, k = 9; i < 9; i++, j++, k--)
        {
            digA += numCPF[i] * j;
            digB += numCPF[i] * k;
        }
        digA = digA % 11;
        if (digA == 10)
            digA = 0;

        digB = digB % 11;
        if (digB == 10)
            digB = 0;

        for (i = 0; i < 3; i++)
        {
            printf("%d", lecpf[i] - 48);
        }
        printf(".");

        for (i = 3; i < 6; i++)
        {
            printf("%d", lecpf[i] - 48);
        }
        printf(".");

        for (i = 6; i < 9; i++)
        {
            printf("%d", lecpf[i] - 48);
        }
        printf("-");
        printf("%d%d", digA, digB);
        printf("\n");
    }
}