/*
2006 - Identificando o Chá
> Cassiano Rodrigues
> 24/06/2020
*/
#include <stdio.h>
main(){
    int t,respostas[5],contador=0,i;
        scanf("%d",&t);
    for (i=0;i<5;i++){
        scanf("%d",&respostas[i]);
        if(respostas[i]==t){
            contador++;
        }
    }
    printf("%d\n",contador);
system("pause");}