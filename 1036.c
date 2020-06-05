#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    double A, B, C, D, aux;
    scanf("%lf", &A);
    scanf("%lf", &B);
	scanf("%lf", &C);
	aux = (B * B) - (4 * A * C);
	if(A != 0){
	if(aux > 0){
		D = sqrt(aux);
		aux = (D - B) / (2 * A);
		printf("R1 = %.5lf\n",aux);
		aux = (0 - D - B) / (2 * A);
		printf("R2 = %.5lf\n",aux);}
    else
		printf("Impossivel calcular\n");}
	else
		printf("Impossivel calcular\n");
        system("pause");}