#include <stdio.h>

/* 1116 - Dividindo X por Y
> Cassiano Rodrigues
> Não lembro a data
*/

main()
{
  int i, quantidade;
  float divisao, x, y;
  scanf("%d", &quantidade);
  for (i = 0; i < quantidade; i++)
  {
    scanf("%f", &x);
    scanf("%f", &y);
    if (y == 0)
    {
      printf("divisao impossivel\n");
    }
    else
    {
      divisao = x / y;
      printf("%.1f\n", divisao);
    }
  }
  system("pause");
}