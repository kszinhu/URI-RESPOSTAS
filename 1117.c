#include <stdio.h>
main()
{
  float a, b, C, D, i;
  for (i = 0; i < 10; i++)
  {
    scanf("%f", &a);
    if (a < 0 || a > 10)
    {
      printf("nota invalida\n");
    }
    else
    {
      C = a;
      break;
    }
  }
  for (i = 0; i < 10; i++)
  {
    scanf("%f", &b);
    if (b < 0 || b > 10)
    {
      printf("nota invalida\n");
    }
    else
    {
      D = b;
      if (D > 0 && C > 0)
      {
        printf("media = %.2f\n", (C + D) / 2);
        break;
      }
    }
  }
  system("pause");
}