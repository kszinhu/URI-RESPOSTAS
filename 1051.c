#include <stdio.h>
main(){
	float salario,i;
    scanf("%f", &salario);
    if(salario <= 2000.0) {
        printf("Isento\n");}
else if(salario <= 3000){
		i=(salario-2000)*0.08;
		printf("R$ %.2f\n",i);}
else if(salario <= 4500){
		i=(salario-3000)*0.18+(1000*0.08);
		printf("R$ %.2f\n",i);}
else if(salario > 4500){
		i=(salario-4500)*0.28+(1500*0.18)+(1000*0.08);
		printf("R$ %.2f\n",i);}
        system("pause");}