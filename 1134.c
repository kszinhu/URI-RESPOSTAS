#include<stdio.h>
main(){
int a,i,A,G,D;
    A=0;G=0;D=0;
    for(i=0;/*PERÍODO INFINITO*/;i++){
        scanf("%d",&a);
    if(a==1){
        A++;}
    else if(a==2){
        G++;}
    else if(a==3){
        D++;}
    else if(a==4){
            break;}
        else{}}
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",A,G,D);
    system("pause");}