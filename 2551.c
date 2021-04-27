/*
2551 - Novo Recorde
> Cassiano Rodrigues
> 02/10/2020
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
    double x, y, medias[31];
    int n, i;
    while (scanf("%d", &n) != EOF)
    {

        for (i = 1; i <= n; ++i)
        {
            scanf("%lf", &x);
            scanf("%lf", &y);
            medias[i] = y / x;
        }

        printf("1\n");
        float maior = medias[1];
        for (i = 2; i <= n; ++i){
            if (medias[i] > maior){
                maior = medias[i];
                printf("%d\n", i);
            }
        }
    }
    system("pause");
}