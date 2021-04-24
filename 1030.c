/* 1030 - A Lenda de Flavious Josephus
> Cassiano Rodrigues
> 04/12/2020
 */
#include <stdio.h>
#include <stdlib.h>

int flav(int n, int k)
{
    /* 
    Wikipedia:
    f(n,k) = (k-1 + f(n-1,k)) %n + 1
    f(1,k) = 1  
    */
    if (n == 1)
    {
        return 1;
    }
    return (k - 1 + flav(n - 1, k)) % n + 1; 
}

main()
{
    int quant, n, k, i;
    scanf("%d", &quant);
    for (i = 1; i <= quant; i++)
    {
        scanf("%d", &n);
        scanf("%d", &k);
        printf("Case %d: %d\n", i, flav(n, k));
    }
    system("pause");
}
