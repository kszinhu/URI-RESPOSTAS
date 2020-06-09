/*
URI 1180 - Menor e Posição
> Cassiano Rodrigues
> 09/06/2020
*/
#include <stdio.h>
main(){
    int n,i,x,minimo,posicao;
        scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&x);
        if(i==0){
            minimo=x;posicao=x;
        }
        else{
            if(x<minimo){
                minimo=x;posicao=i;
            }
        }
    }
    printf("Menor valor: %d\n",minimo);
    printf("Posicao: %d\n",posicao);
system("pause");}