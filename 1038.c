#include<stdio.h>
#include<stdlib.h>
int main() {
	int C, QTD;
    float aux, aux2;
	scanf("%d",&C);
	scanf("%d",&QTD);
	if(C==1){
	aux= 4;
}
    if(C==2){
	aux= 4.5;
}
    if(C==3){
	aux= 5;
}
    if(C==4){
	aux= 2;
}
    if(C==5){
	aux= 1.5;
}
    aux2 = QTD * aux;
    printf("Total: R$ %.2f\n",aux2);
    system("pause");}