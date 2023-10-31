#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char palavras[55] = {};
	
	printf("Digite algo: ");
	fgets(palavras, 55, stdin);
	
	printf("Tamanho: %d\n", strlen(palavras));
	
	return 0;
}