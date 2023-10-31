#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
	
	char palavra1[50] = {"bola"};
	char palavra2[50] = {"abacate"};
	
	printf ("\n\nResultado: %d\n\n", strcmp(palavra1,palavra2));
	
	return 0;
}