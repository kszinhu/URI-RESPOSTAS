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
            J--;
/*>------------------------<*/
            if(Aux%3==0){
/*>Quando chegar na terceira repeticao reinicia<*/
                I=I+2;
                J=7;}}}
    system("pause");}