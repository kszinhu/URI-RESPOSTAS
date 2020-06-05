#include <stdio.h>
main(){
    float a,b,c,M,M2;
scanf("%f",&a);scanf("%f",&b);scanf("%f",&c);
    M=a;
    if(b>=c && b>a && (a>=c || c>=a)){
        M=b;
        b=a;
    }else if(c>=b && c>a && (a>=b || b>=a)){
        M=c;
        c=a;
    }
    	a=M;
    if(c>b){
        M=c;
        c=b;
        b=M;
    }

    if(a>=(b+c)){
       printf("NAO FORMA TRIANGULO\n");}
	else{
       M= a*a;
       M2= (b*b)+(c*c);
       	if(M==M2){
          printf("TRIANGULO RETANGULO\n");}
		else if( M > M2 ){
          printf("TRIANGULO OBTUSANGULO\n");}
		else{printf("TRIANGULO ACUTANGULO\n");}
    		if(a==b && a==c){
          printf("TRIANGULO EQUILATERO\n");}
		else if(a==b || a==c || b==c){
          printf("TRIANGULO ISOSCELES\n");}
    	}
system("pause");}