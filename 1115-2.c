#include<stdlib.h>
#include<stdio.h>
main(){
    int x,y;
while(x!=0||y!=0){
       scanf("%d", &x);scanf("%d", &y);
       if(x>0 && y>0){
           printf("primeiro\n");}
       if(x>0 && y<0){
           printf("quarto\n");}
       if(x<0 && y>0){
           printf("segundo\n");}
       if(x<0 && y<0){
           printf("terceiro\n");}}
    system("pause");}