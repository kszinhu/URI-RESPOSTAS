#include <stdio.h>
int quantidade,i=0;
float n1,n2,n3;
main(){
scanf("%d",&quantidade);
    for(i = 0; i < quantidade; i++){
    scanf("%f",&n1);scanf("%f",&n2);scanf("%f",&n3);
    printf("%.1f\n",((n1*2)+(n2*3)+(n3*5))/10);}
system("pause");}