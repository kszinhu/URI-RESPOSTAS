/*
1930 - Tomadas
> Cassiano Rodrigues
> 19/06/2020
*/
#include <stdio.h>
void pao_de_batata(int a, int b, int c, int d)
{
    printf("%d\n", ((a + b + c + d) - 3)); /* > Subtrai 3 por 3 conexoes entre o primeiro e o penultimo < */
}
main()
{
    int t1, t2, t3, t4;
    scanf("%d", &t1);
    scanf("%d", &t2);
    scanf("%d", &t3);
    scanf("%d", &t4);
    pao_de_batata(t1, t2, t3, t4);
    system("pause");
}