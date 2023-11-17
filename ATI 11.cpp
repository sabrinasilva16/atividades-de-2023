#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase[1000];
    char novaFrase[1000];
    int j = 0;

 
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);


    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ' && frase[i] != '\n') {
            novaFrase[j] = frase[i];
            j++;
        }
    }

  
    novaFrase[j] = '\0';

   
    printf("A nova frase sem espacos em branco e: %s\n", novaFrase);

    return 0;
}
