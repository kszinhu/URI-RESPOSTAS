#include <stdio.h>
main(){    
int num,fat,i;    
scanf("%d",&num);
fat = 1;
        for(i=2; i<=num; i++){
        fat=fat*i;}
    printf("%d\n",fat);
    system("pause");}