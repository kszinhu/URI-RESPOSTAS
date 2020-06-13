/*
1864 - Nossos Dias Nunca Voltarão
> Cassiano Rodrigues
> 13/06/2020
*/
#include <stdio.h>
main(){
    char frase[34]={'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};
    int i,quantidade;
    scanf("%d",&quantidade);
    for (i=0;i<quantidade;i++){
        printf("%c",frase[i]);
    }
    printf("\n");
system("pause");}