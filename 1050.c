#include <stdio.h>
main(){
	int a;
scanf("%d",&a);
	if(a==61){
		printf("Brasilia\n");
		return 3;}
	else if(a==71){
		printf("Salvador\n");
		return 4;}
	else if(a==11){
		printf("Sao Paulo\n");
		return 5;}
	else if(a==21){
		printf("Rio de Janeiro\n");
		return 6;}
	else if(a==32){
		printf("Juiz de Fora\n");
		return 7;}
	else if(a==19){
		printf("Campinas\n");
		return 8;}
	else if(a==27){
		printf("Vitoria\n");
		return 9;}
	else if(a==31){
		printf("Belo Horizonte\n");
		return 10;}
	else{
		printf("DDD nao cadastrado\n");
		return 11;}
    system("pause");}