#include <stdio.h>



int main(void){
	
	float kg,gram,cat,rac1,rac2,day;
	
	printf("\nDigite quantos quilos voce comprou de racao\n ");
	scanf("%f",&kg);
	gram = kg * 1000;
	printf("\nSao no total %.2f gramas de racao\n",gram);
	
	printf("\nDigite quantas gramas de racao os gatos comeram\n ");
	scanf("%f",&cat);
	rac1 = gram-cat;
	printf("\nSobrara no saco %.2f gramas no saco de racao\n ",rac1);
	rac2 = cat * 5;
	day = rac1 - rac2;
	printf("\nEm cinco dias sobrara %.2f gramas\n",day);
	
}