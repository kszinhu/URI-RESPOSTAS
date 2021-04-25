/* 1234 - Sentença Dançante
> Cassiano Rodrigues
> 16/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

main()
{
    char frase1[51], frase2[51];
    int decider, i, tamanho;
    while (gets(frase1) != NULL)
    {
        tamanho = strlen(frase1);
        decider = 0;
        for (i = 0; i < tamanho; i++)
        {
            if (frase1[i] == ' ')
            {
                frase2[i] = ' ';
            }
            else if (decider == 0)
            {
                frase2[i] = toupper(frase1[i]);
                decider = 1;
            }
            else
            {
                frase2[i] = tolower(frase1[i]);
                decider = 0;
            }
        }
        frase2[i] = '\0';
        printf("%s\n", frase2);
    }
    // Decider vai alternando entre 1 e 0, assim alternando as letras entre maiúsculas e minúsculas
    system("pause");
}