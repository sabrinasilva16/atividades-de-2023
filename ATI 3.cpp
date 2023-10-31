#include <string.h>
#include <stdlib.h>
#include <stdio.h>
main()
{
	char nome[30];
	int x,t, ca=0;
	printf ("\n\t INFORME UM NOME: ");
	gets(nome);
	t=strlen(nome);
	for (x=1;x<=t-1;x++)
	{
		if (nome[x]== 'a' || nome[x]=='A')
		ca++;
	}
	printf ("\n O nome %s ",(nome));
	printf ("tem %d letra a.",ca);
	printf ("\n\n");
	system("pause");
	return 0;
}