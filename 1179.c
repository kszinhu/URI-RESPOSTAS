/*
URI 1179 - Preenchimento de Vetor IV
> Cassiano Rodrigues
> 09/06/2020
*/
#include <stdio.h>
main(){
    int num,i,j;
    int vetpar[5],vetimpar[5];
    int contagem_par=0,contagem_impar=0;
    for (i=0;i<15;i++){
        scanf("%d",&num);
        if ((num%2)==0){
            vetpar[contagem_par]=num;
            contagem_par++;
        }
        else{
            vetimpar[contagem_impar]=num;
            contagem_impar++;
        }
        if (contagem_par==5){
            for (j=0;j<5;j++){
                printf("par[%d] = %d\n",j,vetpar[j]);
                vetpar[j]=0; // zerar o vetor
            }
            contagem_par=0;
        }
        if (contagem_impar==5){
            for (j=0;j<5;j++){
                printf("impar[%d] = %d\n",j,vetimpar[j]);
                vetimpar[j]=0; // zerar o vetor
            }
            contagem_impar=0;
        }
    }
    for (i=0;i<contagem_impar;i++){
        printf("impar[%d] = %d\n",i,vetimpar[i]);
    }
    for (i=0;i<contagem_par;i++){
        printf("par[%d] = %d\n",i,vetpar[i]);
    }
system("pause");}