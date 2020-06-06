#include <stdio.h>
main(){
    int denominador;
    float S=0;
    for (denominador=1; denominador<=100; denominador++){
        S+=(1.0/(float)denominador);}
    printf("%.2f\n",S);
    system("pause");}