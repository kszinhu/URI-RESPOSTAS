/*
1865 - Mjölnir
> Cassiano Rodrigues
> 12/06/2020
*/
#include <stdio.h>
main(){
    int c,i,newton;
    char nome[100][20];
    scanf("%d",&c);
    for (i=0;i<c;i++){
        scanf("%s",&nome);scanf("%d",&newton);
            if (nome[0]=='T' && nome[1]=='h' && nome[2]=='o'){
	            printf("Y\n");
            }
        else{
            printf("N\n");
        }
    }
system("pause");}