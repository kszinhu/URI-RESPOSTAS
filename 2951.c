/*
2951 - O Retorno do Rei
> Cassiano Rodrigues
> 24/06/2020
*/
#include <stdio.h>
main(){
    int  n,g,x,vi[100],i,j,soma=0;
    char ri[100], escolhidos;
        scanf("%d",&n);
        scanf("%d",&g);
    for (i=0;i<n;i++){
        scanf(" %c",&ri[i]);
        scanf("%d",&vi[i]);
    }
        scanf("%d",&x);
    for (i=0;i<x;i++){
            scanf(" %c",&escolhidos);
        for (j=0;j<n;j++){
            if (escolhidos==ri[j]){
                soma+=vi[j];
            }
        }
    }
    printf("%d\n",soma);
    if (soma>=g){
        printf("You shall pass!\n");
    }
    else{
        printf("My precioooous\n");
    }
system("pause");}