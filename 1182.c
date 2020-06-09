/*
1182 - Coluna na Matriz
> Cassiano Rodrigues
> 09/06/2020
*/
#include <stdio.h>
#define LINHA 12
#define COLUNA 12
main(){
    int c,i,j;
    char t;
    double soma; 
    double matriz[LINHA][COLUNA];
        scanf("%d",&c);
        scanf(" %c",&t);
    for (i=0;i<LINHA;i++){
        for (j=0;j<COLUNA;j++){
            scanf("%lf",&matriz[i][j]);
            if (j==c){
                soma+=matriz[i][j];
            }
        }
    }
    if (t=='S'){
        printf("%.1lf\n",soma);
    }
    else if (t=='M'){
        printf("%.1lf\n",(soma/LINHA));
    }        
system("pause");}