/*
1828 - Bazinga!
> Cassiano Rodrigues
> 17/06/2020
*/
#include <stdio.h>
#include <string.h>
void amanco(char a[],char b[],int i){
    if(strcmp(a,b)==0){
        printf("Caso #%d: De novo!\n", (i+1));
    }
	else if(strcmp(a,"tesoura")==0 && strcmp(b,"papel")==0){
        printf("Caso #%d: Bazinga!\n",(i+1));
    }
	else if(strcmp(a,"papel")==0 && strcmp(b,"pedra")==0){
        printf("Caso #%d: Bazinga!\n",(i+1));
    }
	else if(strcmp(a,"pedra")==0 && strcmp(b,"lagarto")==0){
        printf("Caso #%d: Bazinga!\n",(i+1));
    }
	else if(strcmp(a,"lagarto")==0 && strcmp(b,"Spock")==0){
        printf("Caso #%d: Bazinga!\n",(i+1));
    }
	else if(strcmp(a,"Spock")==0 && strcmp(b,"tesoura")==0){
        printf("Caso #%d: Bazinga!\n",(i+1));
    }
	else if(strcmp(a,"tesoura")==0 && strcmp(b,"lagarto")==0){
        printf("Caso #%d: Bazinga!\n",(i+1));
    }
	else if(strcmp(a,"lagarto")==0 && strcmp(b,"papel")==0){
        printf("Caso #%d: Bazinga!\n",(i+1));
    }
	else if(strcmp(a,"papel")==0 && strcmp(b,"Spock")==0){
        printf("Caso #%d: Bazinga!\n",(i+1));
    }
	else if(strcmp(a,"Spock")==0 && strcmp(b,"pedra")==0){
        printf("Caso #%d: Bazinga!\n",(i+1));
    }
	else if(strcmp(a,"pedra")==0 && strcmp(b,"tesoura")==0){
        printf("Caso #%d: Bazinga!\n",(i+1));
    }
	else {
        printf("Caso #%d: Raj trapaceou!\n",(i+1));
    }
}
main(){
    int quantidade,i;
    char escolhas_a[1001],escolhas_b[1001];

    scanf("%d",&quantidade);

    for (i=0;i<quantidade;i++){
        scanf("%s",&escolhas_a);scanf("%s",&escolhas_b);
        amanco(escolhas_a,escolhas_b,i);
    }
system("pause");}