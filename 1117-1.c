#include <stdio.h>
main(){
float nota,media,aux,quantidade;
aux=0,quantidade=0;
while(quantidade!=2){
    scanf("%f", &nota);
    if(nota>=0 && nota<=10){
        quantidade++;
        aux+=nota;}
    if(nota<0 || nota>10){
        printf("nota invalida\n");}}
media=aux/2.00;
printf("media = %.2f\n",media);
system("pause");}