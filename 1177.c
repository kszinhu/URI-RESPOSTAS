#include <stdio.h>
main(){
int vet[1000],t,i,x=0;
scanf("%d", &t);
    for (i=0;i<1000;i++){
        vet[i]=x;
        if(x==t-1){x=0;}
        else{x++;}
    }
    for (i=0;i<1000;i++){
        printf("N[%d] = %d\n",(i),(vet[i]));}
system("pause");}