/*
1914 - De Quem é a Vez?
> Cassiano Rodrigues
> 19/06/2020
*/
#include <stdio.h>
#include <string.h>
main(){
	int quantidade,num_1,num_2,soma,i;
    char nome_1[1001],nome_2[1001],escolha_1[1001],escolha_2[1001];
    scanf("%d",&quantidade);
    for (i=0;i<quantidade;i++){
        scanf("%s",&nome_1);scanf("%s",&escolha_1);
        scanf("%s",&nome_2);scanf("%s",&escolha_2);
        scanf("%d",&num_1);scanf("%d",&num_2);
        soma=num_1+num_2;
        if (((strcmp(escolha_1,"PAR")==0) && (soma%2==0)) || ((strcmp(escolha_1,"IMPAR")==0) && (soma%2!=0))){
            printf("%s\n",nome_1);
        }
        else{
            printf("%s\n",nome_2);
        }
    }
system("pause");}