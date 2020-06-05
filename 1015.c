#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
  	float x1,y1,x2,y2,d,e;
  	scanf("%f %f",&x1,&y1);
  	scanf("%f %f",&x2,&y2);
  	e=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
  	d=sqrt(e);
  	printf("%.4f\n",d);
system("pause");}