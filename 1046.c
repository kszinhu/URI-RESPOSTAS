#include <stdio.h>
#include <stdlib.h>
main(){
    int i, f, aux;
	scanf("%d",&i);
	scanf("%d",&f);
	if(i==f){
		aux = 24;
		printf("O JOGO DUROU %d HORA(S)\n",aux);}
	if(f<i){
	aux = 24 - i + f;
		printf("O JOGO DUROU %d HORA(S)\n",aux);}
	if(i<f){
			aux = f - i;
		printf("O JOGO DUROU %d HORA(S)\n",aux);}
system("pause");}