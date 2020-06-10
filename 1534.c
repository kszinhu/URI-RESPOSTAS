/*
1534 - Matriz 123
> Cassiano Rodrigues
> 10/06/2020
*/
#include <stdio.h>
main(){
	int n;
    int linha_i,coluna_j;
	while(scanf("%d",&n)!=EOF){
		for (linha_i=0;linha_i<n;linha_i++){
            for (coluna_j=0;coluna_j<n;coluna_j++){
                if(linha_i+coluna_j==n-1){
                    printf("2");
                }
                else if(linha_i == coluna_j){
                    printf("1");
                }
                else{
                    printf("3");
                }
                
            }
            printf("\n");
        }
        
	}
system("pause");}