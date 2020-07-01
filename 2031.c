/*
2031 - Pedra, Papel, Ataque Aéreo
> Cassiano Rodrigues
> 01/07/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
    char p1[50], p2[50];
	int N,i;
	scanf("%d",&N);
	for (i=0;i<N;i++){
		scanf("%s",&p1);scanf("%s",&p2);
		    /* > Os dois escolhem ataque aéreo < */	  		
		if ((strcmp(p1,"ataque")==0) && (strcmp(p2,"ataque")==0)){
            printf("Aniquilacao mutua\n");
        }
		    /* > Os dois escolhem pedra < */
		else if ((strcmp(p1,"pedra")==0) && (strcmp(p2,"pedra")==0)){
            printf("Sem ganhador\n");
        }
		    /* > Os dois escolhem papel < */
		else if ((strcmp(p1,"papel")==0) && (strcmp(p2,"papel")==0)){
            printf("Ambos venceram\n");
        }
		    /* > Jogador 1 vence < */
		else if (((strcmp(p1,"ataque")==0) && ((strcmp(p2,"pedra")==0)) || (strcmp(p2,"papel")==0)) || ((strcmp(p1,"pedra")==0) && (strcmp(p2,"papel")==0))){
            printf("Jogador 1 venceu\n");
        }
		    /* > Jogador 2 vence < */
		else if (((strcmp(p2,"ataque")==0) && ((strcmp(p1,"pedra")==0)) || (strcmp(p1,"papel")==0)) || ((strcmp(p1,"pedra")==0) && (strcmp(p1,"papel")==0))){
            printf("Jogador 2 venceu\n");
        }
	}
system("pause");}