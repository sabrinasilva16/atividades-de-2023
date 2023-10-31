#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_vogais( char* str);  
int main()
{
    char frase[100];
int i, contador = 0;

   printf("Digite uma frase\n");
fgets(frase, 100, stdin);
for(i=0; i<strlen(frase); i++)
{
 if((frase[i]=='a')||(frase[i]=='i')||(frase[i]=='e')||(frase[i]=='o')||(frase[i]=='u'))
 {
  contador++;
 }
}

int conta_vogais( char* str);

  printf("\nNumero de vogais: %d\n\n", contador);
   getchar();

}