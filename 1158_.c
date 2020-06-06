#include <stdio.h>
main(){
    int vezes=1,vezesimp=0,quantidade,numj,x,y,somaimp=0;
    scanf("%d",&quantidade);
        do{
            scanf("%d",&x);scanf("%d",&y);
                for(numj=x;;numj++){
                    if(vezesimp==y)break;
                    if(numj%2!=0){
                        somaimp+=numj;
                        vezesimp++;}}
        printf("%d\n",somaimp);
        vezes++;vezesimp=0;somaimp=0;
    }while(vezes<=quantidade);
system("pause");}