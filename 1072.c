#include<stdio.h>
main(){
int n,i,t,tf,N;
t=0;tf=0;
scanf("%d",&n);
    for(i=0; i<n; i++){
    scanf("%d",&N);
        if(N>=10 && N<=20){
            t++;}
        else{
            tf++;}}
    printf("%d in\n%d out\n",t,tf);
    system("pause");}