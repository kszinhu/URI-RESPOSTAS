#include <stdio.h>
main(){
    int num,vezes,divisor;
    scanf("%d",&num);
        for (divisor=1; divisor<=num; divisor++){
            if (num%divisor==0){
                printf("%d\n",divisor);}}
system("pause");}