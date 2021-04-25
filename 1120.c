/* 1120 - Revisão de Contrato
> Cassiano Rodrigues
> 16/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

main()
{
    char digito, valor[200];
    int quantidade, i, j;
    while (scanf(" %c %s", &digito, &valor) == 2 && digito != '0')
    {
        quantidade = strlen(valor);
        for (i = 0; i < quantidade; i++)
        {
            /* Eliminar o Digito */
            if (valor[i] == digito)
            {
                for (j = i; j < quantidade; j++)
                {
                    valor[j] = valor[j + 1];
                }
                valor[quantidade - 1] = 0;
                quantidade--;
                i--;
            }
        }
        for (i = 0; i < quantidade - 1; i++)
        {
            /* So deixar um 0 */
            if (valor[i] == '0')
            {
                for (j = i; j < quantidade; j++)
                {
                    valor[j] = valor[j + 1];
                }
                valor[quantidade - 1] = 0;
                quantidade--;
                i--;
            }
            else
            {
                break;
            }
        }
        if (quantidade == 0)
        {
            /* Se o valor for zero, sera printado zero */
            valor[0] = '0';
            valor[1] = '\0'; /* "\0" apos printar o caractere zero */
        }
        printf("%s\n", valor);
    }
    system("pause");
}