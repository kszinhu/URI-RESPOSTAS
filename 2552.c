/* 
2552 - PãodeQuejoSweeper
> Cassiano Rodrigues
> 18/12/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

main()
{
    int n, m, soma = 0;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        int matrix[n][m];
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", matrix[i][j]);
            }
        }

        if (m == 1)
        {
            if (n == 1)
            {
                if (matrix[0][0] == 1)
                {
                    printf("9\n");
                }
                else
                {
                    printf("0\n");
                }
            }
            else
            {
                for (i = 0; i < n; i++)
                {
                    soma = 0;
                    if (i != n - 1)
                    {
                        if (matrix[i][0] == 1)
                        {
                            printf("9\n");
                        }
                        else
                        {
                            if (matrix[i + 1][0] == 1) // Conferindo as casas ao lado (Linha)
                            {
                                soma += 1;
                                printf("%d", soma);
                            }
                        }
                    }
                    else
                    {
                        if (matrix[i][0] == 1)
                        {
                            printf("9\n");
                        }
                        else
                        {
                            if (matrix[i - 1][0] == 1) // Conferindo as casas ao lado (Linha)
                            {
                                soma += 1;
                                printf("%d", soma);
                            }
                        }
                    }
                }
            }
        }
        else if (m == 2)
        {
            if (n == 1)
            {
                soma = 0;
                if (matrix[0][0] == 1)
                {
                    printf("9\n");
                }
                else
                {
                    if (matrix[0][1] == 1)
                    {
                        printf("1\n");
                    }
                    else
                    {
                        printf("0\n");
                    }
                }
                if (matrix[0][1] == 1)
                {
                    printf("9\n");
                }
                else
                {
                    if (matrix[0][0] == 1)
                    {
                        printf("1\n");
                    }
                    else
                    {
                        printf("0\n");
                    }
                }
                printf("\n");
            }
            else
            {
                for
            }
            
        }
    }

    system("pause");
}