#include <stdio.h>
main(){
    int golI=0,golG=0,quantidade=0,vitI=0,vitG=0,empate=0,opcao=1;
while(opcao==1){
    scanf("%d",&golI);scanf("%d",&golG);
    if(golI>golG){
        quantidade++;
        vitI++;}
    if(golG>golI){
        quantidade++;
        vitG++;}
    if(golG==golI){
        quantidade++;
        empate++;}
    printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&opcao);}
printf("%d grenais\n",quantidade);
printf("Inter:%d\n",vitI);
printf("Gremio:%d\n",vitG);
printf("Empates:%d\n",empate);
if(vitI>vitG){
    printf("Inter venceu mais\n");}
if(vitG>vitI){
    printf("Gremio venceu mais\n");}
if(vitI==vitG){
    printf("Nao houve vencedor\n");}
system("pause");
}