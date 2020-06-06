#include <stdio.h>
main(){
    int denominador,numerador;
    float S=0;
        for (numerador=1,denominador=1;numerador<=39;(numerador+=2),(denominador*=2)){
            S+=((float)numerador/(float)denominador);}
printf("%.2f\n",S);
system("pause");}