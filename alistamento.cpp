#include <stdio.h>


int main (void){
	
	int ano , idade , n;
	
	printf("Digite ano de nascimento");
	scanf("%d",&ano);
	
	idade = 2023 - ano ;
    
	if (idade < 18){
	    
	    n = 18 - idade;
	        printf("\nVoce nao tem idade para se alistar %d\n", idade);
	        printf("\nFaltam %d para voce se alistar\n", n);
	       
	}
	else{
		n = idade - 18;
		printf("\nVoce tem idade para se alistar %d\n", idade);
		printf("\nJa se passaram %d anos do alistamento\n", n);
	}	
}