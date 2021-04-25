#include <stdio.h>
main()
{
    int soma = 0, x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x < y)
    {
        for (x; x <= y; x++)
        {
            if (x % 13 != 0)
            {
                soma += x;
            }
        }
    }
    if (y < x)
    {
        for (y; y <= x; y++)
        {
            if (y % 13 != 0)
            {
                soma += y;
            }
        }
    }
    printf("%d", soma);
    system("pause");
}