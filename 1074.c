#include <stdio.h>
int quantidade,i,num;
main(){
    scanf("%d",&quantidade);
    for(i=0; i<quantidade ; i++){
        scanf("%d",&num);
        if(num!=0){
            if(abs(num)%2==0 && num>0){
                printf("EVEN POSITIVE\n");}
            if(abs(num)%2==0 && num<0){
                printf("EVEN NEGATIVE\n");}
            if(abs(num)%2!=0 && num<0){
                printf("ODD NEGATIVE\n");}
            if(abs(num)%2!=0 && num>0){
                printf("ODD POSITIVE\n");}}
        else{printf("NULL\n");}}
    system("pause");}