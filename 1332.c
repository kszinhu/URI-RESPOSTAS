/* 1332 - Um-Dois-Três
> Cassiano Rodrigues
> 16/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

main()
{
    char palavra[6], um[] = "one", dois[] = "two", tres[] = "three";
    int i, j, k, numero, contador_1, contador_2, quantidade, tamanho;
    scanf("%d", &quantidade);
    for (i = 0; i < quantidade; i++)
    {
        scanf("%s", &palavra);
        tamanho = strlen(palavra);
        if (tamanho > 3)
        {
            /* Se tiver mais que 3 caracteres ja podemos considerar como 3 o numero interpretado. */
            numero = 3;
        }
        else if (strcmp(palavra, dois) == 0)
        {
            /* Se a palavra for igual a "two", podemos considerar como 2 o numero interpretado. */
            numero = 2;
        }
        else if (strcmp(palavra, um) == 0)
        {
            /* Se a palavra for igual a "one", podemos considerar como 1 o numero interpretado. */
            numero = 1;
        }
        else
        {
            /* Se nao vemos a que mais tem intersecoes entre elas "one", "two". */
            contador_1 = 0;
            contador_2 = 0;
            for (j = 0; j < 3; j++)
            {
                if (palavra[j] == um[j])
                {
                    contador_1++;
                }
            }
            for (j = 0; j < 3; j++)
            {
                if (palavra[j] == dois[j])
                {
                    contador_2++;
                }
            }
            if (contador_1 == 2)
            {
                numero = 1;
            }
            else
            {
                numero = 2;
            }
        }
        printf("%d\n", numero);
    }
    system("pause");
}