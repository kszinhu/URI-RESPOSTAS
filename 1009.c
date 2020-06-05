#include <stdio.h>
#include <stdlib.h>
main(){
   double a,b,c;
   char nome;
   scanf("%s %lf %lf",&nome,&a,&b);
   c=a+(b*0.15);
   printf("TOTAL = R$ %.2lf\n",c);
system("pause");}