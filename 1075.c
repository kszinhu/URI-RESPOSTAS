#include <stdio.h>
int entrada,i;
main(){
    scanf("%d",&entrada);
    for(i=0;i<10000;i++){
        if(i%entrada==2){
            printf("%d\n",i);}}
    system("pause");}