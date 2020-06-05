#include <stdio.h>
main(){
    double SACAR;
    int SACAR1, n100, n50, n20, n10, n5, n2, n1, m50, m25, m10, m5, m1;
    scanf("%lf", &SACAR);
//CONVERSAO
    SACAR1 = (SACAR * 100);
//NOTAS
    n100 = SACAR1 / 10000;
    SACAR1 = SACAR1 % 10000;
    n50 = SACAR1 / 5000;
    SACAR1 = SACAR1 % 5000;
    n20 = SACAR1 / 2000;
    SACAR1 = SACAR1 % 2000;
    n10 = SACAR1 / 1000;
    SACAR1 = SACAR1 % 1000;
    n5 = SACAR1 / 500;
    SACAR1 = SACAR1 % 500;
    n2 = SACAR1 / 200;
    SACAR1 = SACAR1 % 200;
//IMPRESSAO NOTAS
    	printf("NOTAS:\n");
    	printf("%d nota(s) de R$ 100.00\n", n100);
    	printf("%d nota(s) de R$ 50.00\n", n50);
    	printf("%d nota(s) de R$ 20.00\n", n20);
    	printf("%d nota(s) de R$ 10.00\n", n10);
    	printf("%d nota(s) de R$ 5.00\n", n5);
    	printf("%d nota(s) de R$ 2.00\n", n2);
//MOEDAS
n1 = SACAR1 / 100;
    SACAR1 = SACAR1 % 100;
m50 = SACAR1 / 50;
    SACAR1 = SACAR1 % 50;
m25 = SACAR1 / 25;
    SACAR1 = SACAR1 % 25;
m10 = SACAR1 / 10;
    SACAR1 = SACAR1 % 10;
m5 = SACAR1 / 5;
    SACAR1 = SACAR1 % 5;
//IMPRESSAO MOEDAS
    	printf("MOEDAS:\n");
    	printf("%d moeda(s) de R$ 1.00\n", n1);
    	printf("%d moeda(s) de R$ 0.50\n", m50);
    	printf("%d moeda(s) de R$ 0.25\n", m25);
    	printf("%d moeda(s) de R$ 0.10\n", m10);
    	printf("%d moeda(s) de R$ 0.05\n", m5);
    	printf("%d moeda(s) de R$ 0.01\n", SACAR1);
system("pause");}