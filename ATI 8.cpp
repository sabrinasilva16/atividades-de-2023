#include <stdio.h>
#include <stdlib.h>

int main() {
    char frase[1000];
    int contador_caracteres = 0;


    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);


    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ' && frase[i] != '\n') {
            contador_caracteres++;
        }
    }


    printf("A frase tem %d caracteres diferentes de espaco em branco.\n", contador_caracteres);

    return 0;
}
