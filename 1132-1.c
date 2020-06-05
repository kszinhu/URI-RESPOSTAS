#include <stdio.h>
main(){
int x, y, soma=0, aux=0;
    scanf("%d",&x);scanf("%d",&y);
if(y<x){ /*> X vira o menor <*/
    aux=x;
    x=y;
    y=aux;}
for(x;x<=y;x++){
    if(x%13!=0){
    soma+=x;}}
  printf("%d\n", soma);
system("pause");}