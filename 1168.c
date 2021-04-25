/* 1168 - LED
> Cassiano Rodrigues
> 16/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char num[200];
    int n, i, j, q_caracteres = 0;
    float q_led = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &num);
        q_caracteres = strlen(num);
        q_led = 0;
        for (j = 0; j < q_caracteres; j++)
        {
            if (num[j] == '0')
            {
                q_led += 6;
            }
            else if (num[j] == '9')
            {
                q_led += 6;
            }
            else if (num[j] == '8')
            {
                q_led += 7;
            }
            else if (num[j] == '7')
            {
                q_led += 3;
            }
            else if (num[j] == '6')
            {
                q_led += 6;
            }
            else if (num[j] == '5')
            {
                q_led += 5;
            }
            else if (num[j] == '4')
            {
                q_led += 4;
            }
            else if (num[j] == '3')
            {
                q_led += 5;
            }
            else if (num[j] == '2')
            {
                q_led += 5;
            }
            else if (num[j] == '1')
            {
                q_led += 2;
            }
        }
        printf("%.0f leds\n", q_led);
    }
    system("pause");
}