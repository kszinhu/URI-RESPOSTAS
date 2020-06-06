#include <stdio.h>
main(){
int N,linhas,num=1;
    scanf("%d", &N);
        for(linhas=1;linhas<=N;linhas++){
                printf("%d %d %d\n",num,num*num,(num*num)*num);
                num++;}
    system("pause");}