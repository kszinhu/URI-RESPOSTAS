#include <stdio.h>
main(){
int i,positivos=0;
float num;
    for(i=0; i<6 ;i++){
        scanf("%f",&num);
        if(num>0){
           positivos++;}}
printf("%d valores positivos\n", positivos);
system("pause");}