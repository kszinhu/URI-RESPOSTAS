#include <stdio.h>
main(){
long long int FibS[61];
int i,posicaov,quantidade;
//QUANTIDADE DE TESTES
scanf("%d", &quantidade);
//CALCULO FIBONACCI
FibS[0]=0;FibS[1]=1;
    for (i=2; i<61; i++){
        FibS[i]=FibS[i-1]+FibS[i-2];
    }
//POSICAO FIBONACCI
for(i=0; i<quantidade;i++){
    scanf("%d", &posicaov);
//PRINT
    printf("Fib(%d) = %lld\n",(posicaov),FibS[posicaov]);
}
system("pause");}