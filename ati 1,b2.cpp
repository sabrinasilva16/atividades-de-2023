#include <stdio.h>



int main (void) {
	
	
	int ano , idade;
	
	printf("Digite ano de nacimento");
	scanf("%d", &ano);
	
	idade= 2023 - ano;
	
    if (idade >= 16){
    	printf("\nVoce tem idade para votar %d anos \n", idade);
	}
	else{
		printf("\nVoce não tem idade para votar%d\n");
	}
	return 0;
}