#include <stdio.h>
main(){
int x,y;
    scanf("%d",&x);scanf("%d",&y);
if(x<y){
    for(x++; x<y; x++){
        if(x%5==2||x%5==3)
            printf("%d\n",x);}}
else if(x>y){
    for(y++; y<x; y++){
        if(y%5==2 || y%5==3)
            printf("%d\n",y);}}
system("pause");}