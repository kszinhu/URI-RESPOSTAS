/*
URI 1960 - Numeração Romana para Números de Página
> Cassiano Rodrigues
> 08/05/2020
*/
#include <stdio.h>
main(){
    int num,sair=0;
    char romanos[13][3]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int vet_arabicus[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        scanf("%d",&num);
    while(sair!=1){
        int ind=12; /* > Indice do 'Vetor' < */
        while (num>0){
            if (num>=vet_arabicus[ind]){
                printf("%s",romanos[ind]);
                num-=vet_arabicus[ind];
            }
            else{ind--;}
        }
        printf("\n"); /* > URI Output < */
        sair=1;
    }
system("pause");}