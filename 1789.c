/*
1789 - A Corrida de Lesmas
> Cassiano Rodrigues
> 12/06/2020
*/
#include <stdio.h>
main(){
    int l,v[501],i,maior_v;
    while(scanf("%d",&l)!=EOF){
        maior_v=1;
        for (i=0;i<l;i++){
            scanf("%d",&v[i]);
            if(v[i]>maior_v){
                maior_v=v[i];
            }
        }
        /* ---------- */
        if(maior_v<10){
            printf("1\n");
        }
        else if(maior_v>=10 && maior_v<20){
            printf("2\n");
        }
        else{
            printf("3\n");
        }
    }
system("pause");}