#include <stdio.h>
main(){
long int vezes,quantidade;
long int populacaoA,populacaoB;
double crescimentoA,crescimentoB,anos=0;
    scanf("%d",&quantidade);
        for(vezes=1; vezes<=quantidade; vezes++){
            anos=0;
            //Entrada Populacao
            scanf("%ld",&populacaoA);scanf("%ld",&populacaoB);
            //Entrada Crescimento
            scanf("%lf",&crescimentoA);scanf("%lf",&crescimentoB);
                do{
                    populacaoA=populacaoA*(1+(crescimentoA/100));
                    populacaoB=populacaoB*(1+(crescimentoB/100));
                    anos++;
                    if (anos>100) 
                        break;  
                }while(populacaoA<=populacaoB);
                if (anos>100)
                    printf("Mais de 1 seculo.\n");
                else{
                    printf("%.0lf anos.\n",anos);}}
    system("pause");}