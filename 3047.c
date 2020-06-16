/*
3047 - A idade de Dona Mônica
> Cassiano Rodrigues
> 15/06/2020
*/
#include <stdio.h>
main(){
	int m,a,b,fi_damonica;
    scanf("%d",&m);scanf("%d",&a);scanf("%d",&b);
        fi_damonica=m-(a+b);
    if ((fi_damonica>a)&&(fi_damonica>b)){
        printf("%d\n",fi_damonica);
    }
    else if ((a>fi_damonica)&&(a>b)){
        printf("%d\n",a);
    }
    else{
        printf("%d\n",b);
    }
system("pause");}