#include <stdio.h>
#define MAX 10
main(){
int X[MAX],i;
//Preenche o vetor1
for(i=0; i<MAX;i++){
  scanf("%d", &X[i]);
  if(X[i]<=0){
    X[i]=1;
  }
}
//PRINT
for(i=0; i<MAX;i++){
  printf("X[%d] = %d\n",(i),X[i]);
}
system("pause");}