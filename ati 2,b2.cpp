#include <stdio.h>



int main(void){
	
	int v, vel;
	
	printf("Digite a velocidade: ");
	scanf("%d",&v);
	if(v>80){
		vel = (v-80)*5;
		printf("\nVoce foi multado\n", vel);
	}
	else{
		printf("\nVoce nao foi multado\n");
	}
	return 0;
}