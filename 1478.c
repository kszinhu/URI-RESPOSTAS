/*
1478 - Matriz Quadrada II
> Cassiano Rodrigues
> 10/06/2020
*/
#include <stdio.h>
#include <stdlib.h>
main(){
	int linha,coluna,N=1;
	while(1){
		scanf("%d",&N);
		int matriz[N][N];
		if(N==0){
			break;
		}
/*> -------------- <*/
				/*> PREENCHIMENTO <*/		
		for(linha=0;linha<N;linha++){
			for(coluna=0;coluna<N;coluna++){
				if (linha==coluna){
					matriz[linha][coluna]=1;
				}
				if (linha<coluna){
					matriz[linha][coluna]=coluna-linha+1;
				}
				if (linha>coluna){
					matriz[linha][coluna]=linha-coluna+1;
				}
			}
		}
/*> -------------- <*/
					/*> PRINTF <*/
		for (linha=0;linha<N;linha++){
			for (coluna=0;coluna<N;coluna++){
				if (coluna==0){
					printf("%3hd",matriz[linha][coluna]);
				}
				else{
					printf(" %3hd",matriz[linha][coluna]);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
system("pause");}