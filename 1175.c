#include <stdio.h>
#define MAX 20
main(){
int N[MAX],N_T[MAX],i;
//Preenche o vetor1
for(i=0; i<MAX;i++){
  scanf("%d", &N[i]);
}
//CALCULO
for (i=0;i<MAX;i++){
    N_T[i]=N[i];
}
for (i=0;i<MAX;i++){
    N[i]=N_T[MAX-(i+1)];
}
//PRINT
for(i=0; i<MAX;i++){
        printf("N[%d] = %d\n",(i),N[i]);
}
system("pause");}