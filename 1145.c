#include <stdio.h>
main(){
    int x,y,num;
    scanf("%d",&x);scanf("%d",&y);
    for (num=1; num<=y ;num++){
        if(num%x==0||num==y){
           printf("%d\n",num);}
        else{
           printf("%d ",num);}}
    system("pause");}