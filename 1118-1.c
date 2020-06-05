#include <stdio.h>
main(){
    int opcao=1;
    float nota,soma=0,notaacc=0,i,j;
    while(opcao==1){
        scanf("%f",&nota);
        if(nota<0.0||nota>10.0){
            printf("nota invalida\n");}
        else{
            soma+=nota;
            notaacc++;}
        if(notaacc==2){
            printf("media = %.2f\n",(soma/2));
            printf("novo calculo (1-sim 2-nao)\n");
            opcao=0;
            while(opcao>2.0||opcao<1.0){
                scanf("%d",&opcao);
                if(opcao<1||opcao>2){
                    printf("novo calculo (1-sim 2-nao)\n");}
                else if(opcao==1){
                    notaacc=0;soma=0;}
            }}}
    system("pause");}