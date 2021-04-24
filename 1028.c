/*
1028 - Figurinhas
> Cassiano Rodrigues
> 11/12/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mdc(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return mdc(num2, num1 % num2);
    }
}

main()
{
    int quantidade, ricardof, vicentef, i;
    scanf("%d", &quantidade);
    for (i = 0; i < quantidade; i++)
    {
        scanf("%d", &ricardof);
        scanf("%d", &vicentef);
        printf("%d\n", mdc(ricardof, vicentef));
    }
    system("pause");
}