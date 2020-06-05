#include <stdio.h>
main(){
float soma=0,entrada,media;
int i=0,positivo=0;
    for(i=0; i<6; i++){
        scanf("%f",&entrada);
        if(entrada>0){
            positivo++;
            soma+=entrada;}}
    media=soma/positivo;
    printf("%d valores positivos\n%.1f\n",positivo,media);
    system("pause");}