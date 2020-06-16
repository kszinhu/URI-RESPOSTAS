/*
1577 - Polígonos Regulares Construtíveis
> Cassiano Rodrigues
> 16/06/2020
*/
#include <stdio.h>
/* #include <cstdlib> > SYSTEM <*/ 
main(){
    int t,i,lado;
    scanf ("%d",&t);
    for (i=0;i<t; i++){
        scanf ("%d",&lado);
        while (lado%2==0){
            lado/=2; /* > POTENCIA  < */
        }
        if (lado%3==0){
            lado/=3; /* > PRIMO FERMAT < */
        }
        if (lado%5==0){
            lado/=5; /* > PRIMO FERMAT < */
        }
        if (lado%17==0){
            lado/=17; /* > PRIMO FERMAT < */
        }
        if (lado%257==0){
            lado/=257; /* > PRIMO FERMAT < */
        }
        if (lado%65537==0){
            lado/=65537; /* > PRIMO FERMAT < */
        }
        if (lado==1){
            printf ("Yes\n");
        }
        else{ 
            printf ("No\n");
        }
    }
system("pause");}