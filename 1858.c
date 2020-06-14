/*
1858 - A Resposta de Theon
> Cassiano Rodrigues
> 14/06/2020
*/
#include <stdio.h>
main(){
    int n,t,i=1,posicao_m,resposta;
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&t);
        if (i==1){
            posicao_m=t;
            resposta=i;
        }
        if(t<posicao_m){
            posicao_m=t;
            resposta=i;
        }
        i++;
    }
    printf("%d\n",resposta);
system("pause");}