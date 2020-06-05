#include <stdio.h>
int entrada,i,multiplicacao;
main(){
    scanf("%d",&entrada);
        for(i=1;i<=10;i++){
            multiplicacao=i*entrada;
            printf("%d x %d = %d\n",i,entrada,multiplicacao);}
    system("pause");}