#include <stdio.h>
main(){
int a=1,b=0;
while(a!=b){
    scanf("%d",&a);scanf("%d",&b);
    if(a>b){
        printf("Decrescente\n");}
    if(b>a){
        printf("Crescente\n");}}
    system("pause");}