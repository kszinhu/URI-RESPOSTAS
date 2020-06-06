#include <stdio.h>
#define MAX 10
main(){
int N[MAX],i;
//Preenche o vetor1
for(i=0; i<MAX;i++){
  scanf("%d", &N[i]);
  for (i=1; i<MAX; i++){
      N[i]=N[i-1]*2;
  }
}
//PRINT
for(i=0; i<MAX;i++){
  printf("N[%d] = %d\n",(i),N[i]);
}
system("pause");}