/*
2057 - Fuso Horário
> Cassiano Rodrigues
> 02/07/2020
*/
#include <stdio.h>
#include <stdlib.h>
main(){
	int s,t,f;
		scanf("%d",&s);scanf("%d",&t);scanf("%d",&f);
        t=s+t+f;
        /* > Caso der negativo < */
        if (t<0){
            t=24+t;
        }
        printf("%d\n",(t%24));
system("pause");}