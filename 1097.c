#include<stdio.h>
main(){
int I,J,Aux;
/*>Inicio<*/
J=7;I=1;
/*>------------------------<*/
    for (Aux=1;;Aux++){
/*>Termina quando chegar no 9<*/
        if(I>9){
            break;}
/*>------------------------<*/
        else{
/*>Printando a sequencia<*/
            printf("I=%d J=%d\n",I,J);
            J--;/*>DAQUI<*/
/*>------------------------<*/
            if(Aux%3==0){
                I+=2;
                J+=5;}}}/*>Por que J esta com -1 (DAQUI) <*/
    system("pause");}