/*
1866 - Conta
> Cassiano Rodrigues
> 19/06/2020
*/
#include <stdio.h>
main(){
	int quantidade,n,i;
	scanf("%d",&quantidade);
	for (i=0;i<quantidade;i++){
        scanf("%d",&n);
        if (n%2==0){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
system("pause");}