/*
1924 - Vitória e a Indecisão
> Cassiano Rodrigues
> 19/06/2020
*/
#include <stdio.h>
main(){
	int quantidade,i;
    char curso_1[1001],curso_certo[]="Ciencia da Computacao";
    scanf("%d",&quantidade);
    for (i=0;i<quantidade;i++){
        scanf("%s",&curso_1);
    }
    printf("%s\n",curso_certo);
system("pause");}