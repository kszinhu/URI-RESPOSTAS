/*
1541 - Construindo Casas
> Cassiano Rodrigues
> 11/06/2020
*/
#include <stdio.h>
#include <math.h>
main(){
    int a_med,b_med,c_percentual,lado;
    while(1){
        scanf("%d",&a_med);
        if(a_med==0){
            break;
        }
        scanf("%d",&b_med);
        if(b_med==0){
            break;
        }
        scanf("%d",&c_percentual);
        if(c_percentual==0){
            break;
        }
        else{
            lado=trunc(sqrt(((a_med*b_med)*100)/c_percentual));
            printf("%d\n",lado);
        }
    }
system("pause");}