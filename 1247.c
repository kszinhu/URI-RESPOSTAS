/*
1247 - Guarda Costeira
> Cassiano Rodrigues
> 10/06/2020
*/
#include <stdio.h>
#include <math.h>
main(){
	float D, VF, VG;
    float distancia=0,tf=0,tg=0;
	while(scanf("%f""%f""%f",&D,&VF,&VG)!=EOF){
		distancia=sqrt(144+D*D);
		tf=(12/VF);
		tg=(distancia/VG);
		printf("%c\n",tg<=tf ? 'S':'N');
	}
system("pause");}