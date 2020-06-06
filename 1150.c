#include <stdio.h>
main(){
    int x,z,num,vezes=0,soma=0;
    scanf("%d",&x);
    do{
        scanf("%d",&z);
    }while (x>=z);
    for(num=x; soma<=z; num++){
        soma+=num;
        vezes++;}    
    printf("%d\n",vezes);
    system("pause");}