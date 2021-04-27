#include <stdio.h>
#include <stdlib.h>
/*
2401 - Calculadora
> Cassiano Rodrigues
> Sem info da data
*/
main()
{
    int num, amount;
    double event = 1; // ((1/2)/3) × 6
    char oper;

    scanf("%d", &amount);
    getchar();

    while (amount--)
    {
        scanf("%d %c", &num, &oper);

        if (oper == '*')
        {
            event *= num;
        }
        else
        {
            event /= num;
        }
    }
    printf("%.0lf\n", event);
    system("pause");
}