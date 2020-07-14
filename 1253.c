/*
1253 - Cifra de César
> Cassiano Rodrigues
> 14/07/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define A 65
#define Z 26

main(){
	char linha[52],aux=0;
    int quantidade,pos,i,j;
    scanf("%d",&quantidade);

    for (i=0;i<quantidade;i++){
        scanf("%s",&linha);
        scanf("%d",&pos);
        for (j=0;j<strlen(linha);j++){
            if(linha[j]=='\0'){
                break;
            }
            /* Se for menor que a primeira letra do alfabeto */
            if((linha[j]-pos)<A){
                aux=(linha[j]-pos)+Z;
            }
            else{
                aux=(linha[j]-pos);
            }
            printf("%c",aux);
        }
        printf("\n"); /* cada entrada um \n */
    }
system("pause");}