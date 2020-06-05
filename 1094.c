#include <stdio.h>
main(){
/*----------------------------*/
int c_coel,c_rato,c_sapo; /* Quantidade por Tipos */
int Testes,i,quantia; 
char tipo; /* Entrada do Tipo (Rato,Coelho,Sapo) */
float p1,p2,p3,c_geral; /* Percentuais */
/*----------------------------*/
scanf("%d",&Testes);
c_coel=0;
c_rato=0;
c_sapo=0;
	for(i=0;i<Testes;i++){		
		scanf("%d",&quantia);scanf("%c",&tipo);								
			if(tipo=='C'){
				c_coel=c_coel+quantia;}
			else if(tipo=='R'){
				c_rato=c_rato+quantia;}
			else if(tipo=='S'){
				c_sapo=c_sapo+quantia;}}
/*----------------------------*/              
c_geral=c_sapo+c_rato+c_coel; /* Quantidade Geral */
p1=(c_coel*100.0)/c_geral;
p2=(c_rato*100.0)/c_geral;
p3=(c_sapo*100.0)/c_geral;
/*----------------------------*/
printf ("Total: %f cobaias\n",c_geral);
printf ("Total de coelhos: %d\n",c_coel);
printf ("Total de ratos: %d\n",c_rato);
printf ("Total de sapos: %d\n",c_sapo);
printf ("Percentual de coelhos: %.2f %%\n",p1);
printf ("Percentual de ratos: %.2f %%\n",p2);	
printf ("Percentual de sapos: %.2f %%\n",p3);
/*----------------------------*/
system("pause");}