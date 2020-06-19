/*
1847 - Bem-vindos e Bem-vindas ao Inverno!
> Cassiano Rodrigues
> 17/06/2020
*/
#include <stdio.h>
void amanco(int a,int b,int c){
    if (a>b&& (b<c||b==c)){
        printf(":)\n");
    }
    else if (a<b && (b>c||b==c)){
        printf(":(\n");
    }
    else if (a<b && b<c && ((c-b)<(b-a))){
        printf(":(\n");
    }
    else if (a<b && b<c && ((c-b)>=(b-a))){
        printf(":)\n");
    }
    else if (a>b && b>c && ((b-c)<(a-b))){
        printf(":)\n");
    }
    else if (a>b && b>c && ((b-c)>=(a-b))){
        printf(":(\n");
    }
    else if (a==b && b<c){
        printf(":)\n");
    }
    else{
        printf(":(\n");
    }
}
main(){
    int a,b,c;

    scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
    amanco(a,b,c);

system("pause");}