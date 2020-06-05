#include <stdio.h>
main(){
	float a,ns,r;
	char o = '%';
scanf("%f",&a);
	if(0<=a && a<=400){
	r=a*0.15;
	ns=a+r;
		printf("Novo salario: %.2f\n",ns,o);
		printf("Reajuste ganho: %.2f\n",r);
		printf("Em percentual: 15 %c\n",o);}
	else if(400<a && a<=800){
	r=a*0.12;
	ns=a+r;
		printf("Novo salario: %.2f\n",ns,o);
		printf("Reajuste ganho: %.2f\n",r);
		printf("Em percentual: 12 %c\n",o);}
	else if(800<a && a<=1200){
	r=a*0.10;
	ns=a+r;
		printf("Novo salario: %.2f\n",ns,o);
		printf("Reajuste ganho: %.2f\n",r);
		printf("Em percentual: 10 %c\n",o);}
	else if(1200<a && a<=2000){
	r=a*0.07;
	ns=a+r;
		printf("Novo salario: %.2f\n",ns,o);
		printf("Reajuste ganho: %.2f\n",r);
		printf("Em percentual: 7 %c\n",o);}
	else if(a>2000){
	r=a*0.04;
	ns=a+r;
		printf("Novo salario: %.2f\n",ns,o);
		printf("Reajuste ganho: %.2f\n",r);
		printf("Em percentual: 4 %c\n",o);}
        system("pause");}