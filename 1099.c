#include <stdio.h>
main(){
    int somaimpar=0,i,sl,num1,num2,quantidade,MAIOR,MENOR;
    scanf("%d",&quantidade);
    for(i=0;i<quantidade;i++){
        somaimpar=0;
        scanf("%d",&num1);scanf("%d",&num2);
        if(num1>num2){
            MAIOR=num1;
            MENOR=num2;}
        else{
            MAIOR=num2;
            MENOR=num1;}
        for(sl=MENOR+1;sl<MAIOR;sl++){
            if(sl%2!=0){
                somaimpar=somaimpar+sl;}}
    printf("%d\n",somaimpar);}
    system("pause");}
    