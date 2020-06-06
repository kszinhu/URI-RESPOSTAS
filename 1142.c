#include <stdio.h>
main(){
int N,sequencia;
    scanf("%d", &N);
        for(sequencia=1;sequencia<=N*4;){
                if (sequencia%4==0){
                    printf("PUM\n");
                    sequencia++;}
                else{
                printf("%d ", sequencia);
                sequencia++;}}
    system("pause");}