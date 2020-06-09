/*
1185 - Acima da Diagonal Secundária
> Cassiano Rodrigues
> 09/06/2020
*/
#include <stdio.h>
#define LINHA 12
#define COLUNA 12
main(){
    int contador=0,i,j;
    char O;
    double soma=0; 
    double matriz[LINHA][COLUNA];
        scanf(" %c",&O);
    for (i=0;i<LINHA;i++){
        for (j=0;j<COLUNA;j++){
            scanf("%lf",&matriz[i][j]);
            if ((j+i)<=10){
                soma+=matriz[i][j];
                contador++;
            }
        }
    }
    if (O=='S'){
        printf("%.1lf\n",soma);
    }
    else if (O=='M'){
        printf("%.1lf\n",(soma/contador));
    }        
system("pause");}