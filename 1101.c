#include <stdio.h>
main(){
    int num1=1,num2=1,soma=0, i=1,maior,menor;
    while(num1>0&&num2>0){
        scanf("%d",&num1);scanf("%d",&num2);
        if(num1>0 && num2>0){    
        if(num1>num2){
            maior=num1;
            menor=num2;}
        if(num2>num1){
            maior=num2;
            menor=num1;}
        if(num1==num2){
            maior=num1;
            menor=num2;}
        while(menor<=maior){
            printf("%d ",menor);
            soma+=menor;
            menor++;}
        printf("Sum=%d\n",soma);
        soma=0;}}
        system("pause");}