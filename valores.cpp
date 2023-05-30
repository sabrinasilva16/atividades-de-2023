#include <stdio.h>



int main(void){
	
	
    int a,b,c;
	
	printf("Digite o numero da primeira variavel: ");
	scanf("%d",&a);
	printf("Digite o numero da segunda variavel: ");
	scanf("%d",&b);
	printf("O valor da variavel A e: %d ",a);
    printf("\nO valor da variavel B e: %d\n",b);
	c = a;
	a = b;
	b = c;
	printf("\nO valor da variavel A agora e: %d\n",a);
	printf("\nO valor da variavel B agora e: %d\n",b);
	return 0;

}