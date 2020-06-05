#include <stdio.h>
main(){
    float i,j;
/*>Rodar ate que o I seja 2.0<*/
    for(i=0.0; i<2.1 ;i+=0.2){ 
/*>Ate chegar na terceira repeticao<*/
        for(j=1.0; j<=3.0 ;j+=1.0){
/*(//0,2+1,0 >/3x/< 0,4+1,0 >/3x/< 0,6+1,0 >/3x/< 0,8+1,0//)*/
            if(i>0&&i<1.0)
               printf("I=%.1f J=%.1f\n",i,j+i);
/*(//1,2+1,0 >/3x/< 1,4+1,0 >/3x/< 1,6+1,0 >/3x/< 1,8+1,0//)*/
            else if(i>1.0&&i<2.0)
               printf("I=%.1f J=%.1f\n",i,j+i);
/*(//2+1,0//2+2//2+3//)*/
            else{printf("I=%0.f J=%0.f\n",i,j+i);}}}
    system("pause");}