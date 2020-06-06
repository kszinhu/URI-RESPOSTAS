#include <stdio.h>
main(){
int i;
double vet[100],x,y,z;
    scanf("%lf",&x);
    for (i=0;i<100;i++){
        vet[i]=x;
        x=x/2;
    }
    for (i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, vet[i]);}
system("pause");}