#include <stdio.h>
main(){
int i,par=0,impar=0,pos=0,neg=0,entrada;
for(i=0; i<5 ;i++){
    scanf("%d",&entrada);
    if(entrada%2==0){
        par++;}
    if(entrada%2!=0){
        impar++;}
    if(entrada>0){
        pos++;}
    if(entrada<0){
        neg++;}}
printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",par,impar,pos,neg);
system("pause");}