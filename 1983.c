/*
1983 - O Escolhido
> Cassiano Rodrigues
> 22/06/2020
*/
#include <stdio.h>
main(){
    int quantidade,matricula,maior_matricula,i;
    float nota,maior_nota;
        scanf("%d",&quantidade);
    for (i=0;i<quantidade;i++){
        scanf("%d",&matricula);
        scanf("%f",&nota);
        if (i==0){
            maior_matricula=matricula;
            maior_nota=nota;
        }
        if(nota>maior_nota){
            maior_matricula=matricula;
            maior_nota=nota;
        }
    }
    if(maior_nota<=(8.0)){
        printf("Minimum note not reached\n");
    }
    else{
        printf("%d\n",maior_matricula);
    }
    
system("pause");}