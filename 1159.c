#include <stdio.h>
main(){
int i,numj,num,vezes,somapar=0;
    for(i=0;; i++){
        scanf("%d",&num);
        if(num==0)
            break;
        somapar=0; vezes=0;
        for(numj=num;;numj++){
            if(vezes==5)
                break;
            if(numj%2==0){
                somapar = somapar + numj;
                vezes++;}}
        printf("%d\n",somapar);}
system("pause");}