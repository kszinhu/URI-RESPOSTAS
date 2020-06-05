#include <stdio.h>
main(){
	int N1,N2,N3,N4,N5,N6,N7,N8,C100,C50,C20,C10,C5,C2,C1;
scanf("%d",&N1);
//O Numero "original"(consecutivo) vai sendo subtraido a cada valor da cedula que ele eh divisivel
//NOTAS 100
	C100=N1/100;
		N2=N1-(C100*100);
//NOTAS 50
	C50=N2/50;
		N3=N2-(C50*50);
//NOTAS 20
	C20=N3/20;
		N4=N3-(C20*20);
//NOTAS 10
	C10=N4/10;
		N5=N4-(C10*10);
//NOTAS 5
	C5=N5/5;
		N6=N5-(C5*5);
//NOTAS 2
	C2=N6/2;
		N7=N6-(C2*2);
//"NOTAS" 1
	C1=N7/1;
		N8=N7-(C1*1);
printf("%d\n",N1);
		printf("%d nota(s) de R$ 100,00\n",C100);
			printf("%d nota(s) de R$ 50,00\n",C50);printf("%d nota(s) de R$ 20,00\n",C20);printf("%d nota(s) de R$ 10,00\n",C10);
				printf("%d nota(s) de R$ 5,00\n",C5);printf("%d nota(s) de R$ 2,00\n",C2);printf("%d nota(s) de R$ 1,00\n",C1);
                system("pause");}