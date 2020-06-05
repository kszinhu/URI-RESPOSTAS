#include <stdio.h>
main(){
int i,quantidade=0,entrada;
for(i=0; i<5 ;i++){
  scanf("%d",&entrada);
  if(entrada%2==0){
    quantidade++;}}
printf("%d valores pares\n",quantidade);}