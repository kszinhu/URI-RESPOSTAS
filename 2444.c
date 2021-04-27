/* 2444 - Volume da TV
> Cassiano Rodrigues
> 04/12/2020
 */
#include <stdio.h>
#include <stdlib.h>

main()
{
    int vol, trocas, volp, i;
    scanf("%d", &vol);
    scanf("%d", &trocas);

    for (i = 0; i < trocas; i++)
    {
        scanf("%d", &volp);
        if (vol + volp > 100)
        {
            vol = 100;
        }
        else if (vol + volp > 0)
        {
            vol += volp;
        }
        else
        {
            vol = 0;
        }
    }
    printf("%d\n", vol);
    system("pause");
}