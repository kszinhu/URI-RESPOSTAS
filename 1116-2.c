#include<stdio.h>
main(){
    int t,num1,divisor;
    double  d;
    scanf("%d",&t);
    while(t!=0){
        t--;
        scanf("%d %d",&num1,&divisor);
        if(divisor==0)
        printf("divisao impossivel\n");
        else{
            d=(double)num1/divisor;
            printf("%.1lf\n",d);}}
      system("pause");}