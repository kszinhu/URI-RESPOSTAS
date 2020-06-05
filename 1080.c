#include <stdio.h>
int entrada100,i,MAIOR,posicao;
main(){
    for(i=1;i<=100;i++){
        scanf("%d",&entrada100);
        if(entrada100>MAIOR){
            posicao=i;
            MAIOR=entrada100;}}
        printf("%d\n%d\n",MAIOR,posicao);
system("pause");}