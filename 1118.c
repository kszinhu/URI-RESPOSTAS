#include <stdio.h>
main()
{
    int opcao;
    float nota, soma = 0, notaacc = 0, i, j;
    for (i = 0;; i++)
    {
        scanf("%f", &nota);
        if (nota < 0.0 || nota > 10.0)
        {
            printf("nota invalida\n");
        }
        else
        {
            soma += nota;
            notaacc++;
        }
        if (notaacc == 2)
        {
            printf("media = %.2f\n", (soma / 2));
            printf("novo calculo (1-sim 2-nao)\n");
            do
            {
                scanf("%d", &opcao);
                if (opcao < 1 || opcao > 2)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                }
                else if (opcao == 1)
                {
                    notaacc = 0;
                    soma = 0;
                }
                else if (opcao == 2)
                {
                    break;
                }
            } while (opcao > 2.0 || opcao < 1.0);
        }
        if (opcao == 2)
        {
            break;
        }
    }
    system("pause");
}