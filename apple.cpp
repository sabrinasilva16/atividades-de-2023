#include <stdio.h>

int main(void) {
	
	float apple, mndz, madz;
	
	printf("Digite o numero de macas que voce comprou: ");
	scanf("%f",&apple);
	
	if (apple < 12){
		mndz = apple*0.30;
		printf("O valor a ser pago e de R$%.2f",mndz,"reais");
	}
	else{
		madz = apple*0.25;
		printf("O valor a ser pago e de R$%.2f",madz,"reais");
	}
}