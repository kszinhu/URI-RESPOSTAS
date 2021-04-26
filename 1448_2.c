/*
1448 - Telefone Sem Fio
> Cassiano Rodrigues
> 15/06/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
    int t,i,j;
    char frase_c[101],frase_t1[101],frase_t2[101];
    int frasecopia1,frasecopia2,tamanho;
    int cont_et1,cont_et2,primeiroAcerto1,primeiroAcerto2;

    scanf("%d",&t);
    getchar();

    for (j=0;j<t;j++){
        cont_et1=0;cont_et2=0;
        primeiroAcerto1=0,primeiroAcerto2=0;

        gets(frase_c);
        gets(frase_t1);
        gets(frase_t2);

        tamanho=strlen(frase_c);

        for (i=0;i<tamanho;i++){
            if (frase_c[i]==frase_t1[i]){
                frasecopia1=1;
                cont_et1++;
            }
            else if (frase_c[i]!=frase_t1[i]){
                frasecopia1=0;
            }
            if (frase_c[i]==frase_t2[i]){
                frasecopia2=1;
                cont_et2++;
            }
            else if (frase_c[i]!=frase_t2[i]){
                frasecopia2=0;
            }
            if ((frasecopia1==1&&frasecopia2==0)&&primeiroAcerto1==0){
               primeiroAcerto1=i;
            }
            if ((frasecopia1==0&&frasecopia2==1)&&primeiroAcerto2==0){
                primeiroAcerto2=i;
            }
        }
            if (cont_et1>cont_et2){
                printf("Instancia %d\n",(j+1));
                printf("time 1\n");
            }
            else if (cont_et2>cont_et1){
                printf("Instancia %d\n",(j+1));
                printf("time 2\n");
            }
            else {
			    if(primeiroAcerto1<primeiroAcerto2){
                    printf("Instancia %d\n",(j+1));
				    printf("time 1\n");
                }
			    else if(primeiroAcerto2<primeiroAcerto1){
                    printf("Instancia %d\n",(j+1));
				    printf("time 2\n");
                }
			    else{
                    printf("Instancia %d\n",(j+1));
				    printf("empate\n");
                }
		    }
            printf("\n");
        }
system("pause");}