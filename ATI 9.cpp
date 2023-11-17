#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char palavra[51];

 
    printf("Digite uma palavra (maximo de 50 letras): ");
    fgets(palavra, sizeof(palavra), stdin);

   
    palavra[strcspn(palavra, "\n")] = '\0';

 
    for (int i = 0; i < strlen(palavra); i++) {
        palavra[i] = palavra[i] + 1;
    }

  
    printf("A palavra resultante e: %s\n", palavra);

    return 0;
}
