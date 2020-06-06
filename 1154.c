#include <stdio.h>
main(){
    int idade,quantidade=0;
    float soma=0,media;
    do{
        scanf("%d",&idade);
        quantidade++;soma+=idade;
    }while(idade>0);
    soma-=idade;
    quantidade--;
    media=soma/quantidade;
    printf("%.2f\n", media);
    system("pause");}