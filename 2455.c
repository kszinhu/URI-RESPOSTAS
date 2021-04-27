/* 2455 - Gangorra
> Cassiano Rodrigues
> 18/09/2020
*/

#include <stdio.h>
#include <stdlib.h>

main()
{
    int c1, c2, p1, p2;
    scanf("%d", &p1);
    scanf("%d", &c1);
    scanf("%d", &p2);
    scanf("%d", &c2);
    if (p1 * c1 == p2 * c2)
    {
        printf("0\n");
    }
    else if (p1 * c1 < p2 * c2)
    {
        printf("1\n");
    }
    else
    {
        printf("-1\n");
    }
    system("pause");
}