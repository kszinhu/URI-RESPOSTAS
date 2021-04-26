/*
1769 - CPF 1
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
    char lecpf[15], straux[15];
    short numCPF[15]; // Int, alterava valor
    int digA = 0, digB = 0, aux;
    unsigned char i, j, k;

    while (scanf(" %s", lecpf) != EOF)
    {
        aux = 0;
        while (aux < 14)
        {

            if (isdigit(lecpf[i]))
                straux[j++] = lecpf[i];

            aux++;
        }
        straux[j] = '\0';

        conv(straux, numCPF);

        for (i = 0, j = 1, k = 9; i < 9; i++, j++, k--)
        {
            digA += numCPF[i] * j;
            digB += numCPF[i] * k;
        }

        if (digA % 11 == 10)
            digA = 0;
        digB = digB % 11;
        if (digB % 11 == 10)
            digB = 0;

        if (digA == numCPF[9] && digB == numCPF[10])
            printf("CPF valido\n");
        else
            printf("CPF invalido\n");
        digA = 0;
        digB = 0;
    }
}
