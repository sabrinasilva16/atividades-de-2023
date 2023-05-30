#include <stdio.h>

int main(void){
	char name [10];
	float n1, n2, n3, n4,soma,media;
	int age;
	
	
	printf("Digite seu Nome");
	scanf("%s" ,&age);
	printf("Qual a sua Idade?");
	scanf("%d" ,&age);
	
	printf("Digite sua Nota do Primeiro bimestre:");
	scanf("%f" ,&n1);
	printf("Digite sua Nota do Segundo bimestre:");
	scanf("%f" ,&n2);
	printf("Digite sua Nota do Terceiro bimestre:");
	scanf("%f" ,&n3);
	printf("Digite sua Nota do Quarto bimestre:");
	scanf("%f" ,&n4);
	
	soma = n1 + n2 + n3 + n4;
	media = soma/4;
	if (media >=15){
		
		printf("\n Aluna: %s \n",name);
		printf("\n Sua idade e: %d\n", age);
		printf("\n Aluno Aprovado \n");
		printf("\n Sua media e: %.2f\n", media);
	}
	else{
		printf("\n Aluno: %s \n",name);
		printf("\n Sua Idade e: %d\n", age);
		printf("\n Aluno Reprovado\n");
		printf("\n Sua media e: %.2f\n", media);
	}
}