#include <stdio.h>
#define MAX 100
main(){
double A[MAX];
int i;
//Preenche o vetor1
for(i=0; i<MAX;i++){
  scanf("%lf", &A[i]);
}
//PRINT
for(i=0; i<MAX;i++){
    if (A[i]<=10.0){
        printf("A[%d] = %.1lf\n",(i),A[i]);
    }
}
system("pause");}