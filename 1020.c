#include <stdio.h>
#include <stdlib.h>
  main(){
  	int x,a,ac,m,mc,d;
  	scanf("%d",&x);
  	a=x/365;
  	ac=x%365;
  	m=ac/30;
  	mc=ac%30;
  	d=mc;
  	printf("%d ano(s)\n",a);
  	printf("%d mes(es)\n",m);
  	printf("%d dia(s)\n",d);
  	system("pause");}
