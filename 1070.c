#include<stdio.h>
main(){
    int X,i=0,quantidade=0;
    scanf("%d",&X); /* Numero de Entrada */
    for(i=0;quantidade<6;i++){  /* Quando a quantidade chegar em 6 ele para */
        if(X%2!=0){ /* pAH PEGAR OS IMPAR */
            printf("%d\n",X); /* Pa mostrar os impart */
            quantidade++;} /* Quantidade para somar os impares que ja foram mostrados */
        X++;} /* Soma para pegar outros impares */
    system("pause");}