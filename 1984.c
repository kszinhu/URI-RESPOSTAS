/*
1984 - O Enigma do Pronalândia
> Cassiano Rodrigues
> 23/06/2020
*/
#include <stdio.h>
void inverter(long long int num){
    long long int num_t;
    num_t = num;
    long long int inv=0;
    while (num>0) {
        inv = ((10*inv)+(num%10)); /* > Dezena + Numero < */
        num /= 10;
    }
    if (num_t%10==0){
        printf("0%lld\n",inv); /* > Exemplo - 90 => 09 < */
    }
    else{
        printf("%lld\n",inv);
    }
}
main(){
	long long int n;
    scanf("%lld",&n);
    inverter(n);
system("pause");}