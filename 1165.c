#include <stdio.h>
main(){
int num1,vezes=0,divisor,quantidade,divisoes=0;
    scanf("%d", &quantidade);
        for(vezes=1; vezes<=quantidade; vezes++){
            scanf("%d",&num1);
                for(divisor=1,divisoes=0; divisor<=num1; divisor++){
                    if(num1%divisor==0){
                        divisoes++;}}
                    if(divisoes==2){
                        printf("%d eh primo\n", num1);}
                    else if(divisoes>2){
                        printf("%d nao eh primo\n", num1);}}
    system("pause");}