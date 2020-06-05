#include <stdio.h>
#include <stdlib.h>
main(){
	int a,b,c,d,e;
  	scanf("%d %d %d",&a,&b,&c);
  	d=(a+b+abs(a-b))/2;
  	e=(c+d+abs(c-d))/2;
  	printf("%d eh o maior\n",e);
    system("pause");}