/*
1962 - Há Muito, Muito Tempo Atrás
> Cassiano Rodrigues
> 22/06/2020
*/
#include <stdio.h>
#define ANO 2015
main(){
    int quantidade,ano,i;
        scanf("%d",&quantidade);
    for (i=0;i<quantidade;i++){
        scanf("%d",&ano);
        ano=ANO-ano;
        if(ano<0){
            printf("%d A.C.\n",((ano*-1)+1));
        }
        if (ano==0){
            printf("%d A.C.\n",1);
        }
        if (ano>0){
            printf("%d D.C.\n",ano);
        }
    }
system("pause");}