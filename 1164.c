#include <stdio.h>
main(){
int num1,vezes,soma=0,numsequencia,quantidade;
    scanf("%d", &quantidade);
        for(vezes=1; vezes<=quantidade; vezes++){
            scanf("%d",&num1);
                for(numsequencia=1; numsequencia<num1; numsequencia++){
                    if(num1%numsequencia==0){
                        soma+=numsequencia;}}
                    if(soma==num1){
                        printf("%d eh perfeito\n", num1);
                        soma=0;}
                    else{
                        printf("%d nao eh perfeito\n", num1);
                        soma=0;}}
    system("pause");}