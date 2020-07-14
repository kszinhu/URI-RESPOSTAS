/*
1827 - Matriz Quadrada IV
> Cassiano Rodrigues
> 14/07/2020
*/

#include <stdio.h>
#include <stdlib.h>

main(){
	int matriz[102][102],i,j;
    int n,a,b;
	while(scanf("%d",&n)!=EOF){
        b=(n-1);
        a=0;
			for (i=0;i<n;i++){
                for (j=0;j<n;j++){
                    /* Ponto Central */
                    if((n/2==i)&&(n/2==j)){
                        matriz[i][j]=4;
                    }
                    /* Miolo */
                    else if((i>=(n/3))&&(j>=(n/3))&&((n-i)>(n/3))&&((n-j)>(n/3))){
                        matriz[i][j]=1;
                    }
                    /* Diagonal Principal */
                    else if(i==j){
                        matriz[i][j]=2;
                    }
                    /* Diagonal Secundaria */
                    else if((i==a)&&(j==b)){
                        matriz[i][j]=3;
                    }
                    /* Restante das condicoes especiais */
                    else{
                        matriz[i][j]=0;
                    }
                }
				a++;
                b--;
			}
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				printf("%d",matriz[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
system("pause");}