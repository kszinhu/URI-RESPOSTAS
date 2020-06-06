#include <stdio.h>
#define L 12 /* Constante da Linha */
#define C 12 /* Constante da Coluna */
main(){
	int linhaop,i,a;
	double matriz[L][C],soma = 0,media = 0;
	char car;
/*---------------->Entrada da Linha<----------------*/
	scanf("%d", &linhaop);
/*---------------->Entrada da Soma ou Média<----------------*/
	scanf(" %c", &car);
/*---------------->Configuração da Matriz<----------------*/
	for(i = 0; i < L; i++){
		for(a = 0; a < C; a++){
			scanf("%lf", &matriz[i][a]);
			if(i == linhaop) soma+= matriz[i][a];}
		media = soma/C;}
/*---------------->Saida<----------------*/
	if(car == 'S'){
        printf("%.1lf\n", soma);}
	else if(car == 'M'){
        printf("%.1lf\n", media);}
	system("pause");}