#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substituir_letra(char *str, char l1, char l2) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == l1) {
            str[i] = l2;
        }
    }
}

int main() {
    char str[100];
    char l1, l2;

    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

  
    str[strcspn(str, "\n")] = '\0';

   
    printf("Digite a letra L1: ");
    scanf(" %c", &l1);

    printf("Digite a letra L2: ");
    scanf(" %c", &l2);

    
    substituir_letra(str, l1, l2);

   
    printf("A nova string e: %s\n", str);

    return 0;
}
