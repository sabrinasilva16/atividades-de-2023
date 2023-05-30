#include <stdio.h>



int main (void){
		float p1,p2,media;
		char nome[10];
		printf("Digite o seu nome: ");
		scanf("%s",&nome);
		printf("Digite sua nota da prova 1: ");
	    scanf("%f",&p1);
		printf("Digite sua nota da prova 2: "); 
		scanf("%f",&p2);
		
		media = (p1+p2)/2;
		
		if (media >=7){
			printf("\n%s Voce foi aprovado!Sua media foi%.2f\n",nome,media);
		}
		else{
			printf("\n%s Voce nao teve um bom aproveitamento. Sua media foi %.2f\n",nome,media);
		}	
return 0;		
}