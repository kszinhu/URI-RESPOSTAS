#include <stdio.h>
main(){
int N,H,M,S;
scanf("%d",&N);
S = (N%3600)%60;
M = (N%3600)/60;
H = N/3600;
printf("%d:%d:%d\n",H,M,S);
system("pause");}