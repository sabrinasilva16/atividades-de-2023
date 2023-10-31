#include <string.h>
#include <stdlib.h>
#include <stdio.h>
main()
{
	char nome[30];
	int i;
	printf ("informe um nome:");
	gets(nome);
	for(i=0;i<=3;i++)
	printf("\%c",nome[i]);
	return 0;
}