/*
1759 - Ho Ho Ho
> Cassiano Rodrigues
> 11/06/2020
*/
#include <stdio.h>
main(){
    int n,quantidade;
    scanf("%d",&n);
    for (quantidade=1;quantidade<=n;quantidade++){
        if(quantidade==n){
            printf("Ho!\n");
        }
        else{
            printf("Ho ");
        }
    }
system("pause");}