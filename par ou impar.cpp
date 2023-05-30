#include <stdio.h>



int main (void){
	int n, rest;
printf("Digite um numero ");
scanf("%d",&n);

rest = n%2;

if(rest == 0)
	printf("\nO numero e par %d\n ",n);

else
	printf("\nO numero e impar %d\n ",n);
	

}