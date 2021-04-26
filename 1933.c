/*
1933 - Tri-du
> Cassiano Rodrigues
> 19/06/2020
*/
#include <stdio.h>
void maior(int a,int b){
    printf("%d\n",((a>b)?a:b));
}
main(){
	int a,b;
    scanf("%d",&a);scanf("%d",&b);
    maior(a,b);
system("pause");}