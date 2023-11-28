#include <stdio.h>
#include <string.h>

int main() {
    char frase1[100], frase2[100];

    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);

    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);

    printf("\nFrase invertida e com 'A' trocado por '*':\n");

    printf("Frase 1 invertida: ");
    for (int i = strlen(frase1) - 1; i >= 0; i--) {
        if (frase1[i] == 'A') {
            printf("*");
        } else {
            printf("%c", frase1[i]);
        }
    }
    printf("\n");

    printf("Frase 2 invertida: ");
    for (int i = strlen(frase2) - 1; i >= 0; i--) {
        if (frase2[i] == 'A') {
            printf("*");
        } else {
            printf("%c", frase2[i]);
        }
    }
    printf("\n");

    return 0;
}
