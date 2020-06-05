#include <stdio.h>
main(){
	int d1,h1,m1,s1,d2,h2,m2,s2,S,M,H,D;
	char aa;
scanf("Dia %d",&d1);
scanf("%d : %d : %d",&h1,&m1,&s1);
scanf("%*c",&aa); /*/ Desbugar/*/
scanf("Dia %d",&d2);
scanf("%d : %d : %d",&h2,&m2,&s2);
	S=s2-s1;
	M=m2-m1;
	H=h2-h1;
	D=d2-d1;
if(S<0){
	S+=60;
	M--;}
if(M<0){
	M+=60;
	H--;}
if(H<0){
	H+=24;
	D--;}
    	printf("%d dia(s)\n",D);
    	printf("%d hora(s)\n",H);
    	printf("%d minuto(s)\n",M);
    	printf("%d segundo(s)\n",S);
        system("pause");}