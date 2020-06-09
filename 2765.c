/*
2765 - Entrada e Saída com Virgula
> Cassiano Rodrigues
> 09/06/2020
*/
#include <stdio.h>
#include <string.h>
#include <strings.h>
main(){
    int i;
    char frase[128];
    while(gets(frase)){
        for(i=0;i<strlen(frase);i++){
            if(frase[i]==','){
                printf("\n");
            }
            else{
                printf("%c",frase[i]);
            }
        }
        printf("\n");
    }
system("pause");}