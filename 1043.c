#include <stdio.h>
#include <stdlib.h>
main(){
  	double a,b,c,pt,at;
  	scanf("%lf %lf %lf",&a,&b,&c);
  	if(a+b>c && a+c>b && b+c>a){
  		pt=a+b+c;
  		printf("Perimetro = %.1lf\n",pt);}
	else{
		at=((a+b)*c)/2;
		printf("Area = %.1lf\n",at);}
system("pause");}