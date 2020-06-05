#include<stdio.h>
main(){
    int Entrada,i;
    scanf("%d",&Entrada);
    for(i=1;i<=Entrada;i++){
        if(i%2==0){
            printf("%d^2 = %d\n",i,(i*i));}}
    system("pause");}