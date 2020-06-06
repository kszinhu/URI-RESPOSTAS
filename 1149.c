#include <stdio.h>

main(){
    int i,a,n,vezes=0,soma=0;
    scanf("%d",&a);
    do{
        scanf("%d",&n);
        }while(n<=0);
    for (i=a;vezes<=(n-1);i++){
        soma+=i;
        vezes++;}
printf("%d\n",soma);
system("pause");}