#include <stdio.h>
main(){
    int aux,a=1,b=1,vezes,quantidade;
    scanf("%d",&quantidade);
        printf("0");
    for (vezes = 1; vezes<quantidade; vezes++){
        printf(" %d",a);
            aux=a; /* Segurar o valor inicial */
            a=b; /* Atribuir o novo valor */
            b+=aux; /* Soma dos valores passados */ }
        printf("\n");
    system("pause");}