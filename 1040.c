#include <stdio.h>
#include <stdlib.h>
main(){
	double n1,n2,n3,n4,MF,ne;
scanf("%lf",&n1);scanf("%lf",&n2);scanf("%lf",&n3);scanf("%lf",&n4);
	MF = (n1*2 + n2*3 + n3*4 + n4)/10;
printf("Media: %.1lf\n",MF);
	if(MF>=7){
		printf("Aluno aprovado.\n");
}	else if(MF<5){
		printf("Aluno reprovado.\n");
}
		else{
		printf("Aluno em exame.\n");
		scanf("%lf",&ne);
		printf("Nota do exame: %.1f\n",ne);
			MF = (MF+ne)/2;
				if(MF>5){
					printf("Aluno aprovado.\n");
					printf("Media final: %.1lf\n",MF);
						}else{
						printf("Aluno reprovado.\n");
						printf("Media final: %.1lf\n",MF);}
                        }
system("pause");}
