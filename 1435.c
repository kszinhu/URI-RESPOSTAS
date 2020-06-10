/*
1435 - Matriz Quadrada I
> Cassiano Rodrigues
> 10/06/2020
*/
#include <stdio.h>
#include <stdlib.h>
main(){
	int linha,coluna,N=1,v_impresso;
	while(1){
		scanf("%d",&N);
	if(N==0){
		break;
	}
/*> -------------- <*/
				/*> PREENCHIMENTO <*/	
		for(linha=1;linha<=N;linha++){
            for(coluna=1;coluna<=N;coluna++){
                v_impresso=linha;
                if(coluna<v_impresso){
					v_impresso=coluna;
				}
                if(N-linha+1<v_impresso){
					v_impresso=N-linha+1;
				}
                if(N-coluna+1<v_impresso){
					v_impresso=N-coluna+1;
				}
/*> -------------- <*/
					/*> PRINTF <*/
                printf("%3d",v_impresso); /* %[3] indica 3 espacos no display */
                if(coluna<N){
					printf(" ");
				}
                else{
					printf("\n");
				}
            }
        }
        printf("\n");
    }
system("pause");}