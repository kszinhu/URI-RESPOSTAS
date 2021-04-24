#include <stdio.h>

/* 1114 - Senha Fixa
> Cassiano Rodrigues
> Não lembro a data
*/

main()
{
    int senha;
    scanf("%d", &senha);
    while (senha != 2002)
    {
        printf("Senha Invalida\n");
        scanf("%d", &senha);
    }
    printf("Acesso Permitido\n");
    system("pause");
}