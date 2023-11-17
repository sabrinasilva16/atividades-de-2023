#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char cadeia[100];

   
    printf("Digite uma cadeia de caracteres: ");
    fgets(cadeia, sizeof(cadeia), stdin);

   
    cadeia[strcspn(cadeia, "\n")] = '\0';

   
    for (int i = 0; i < strlen(cadeia); i++) {
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z') {
            
            cadeia[i] = cadeia[i] - 32;
        }
    }

   
    printf("A cadeia em maiusculo e: %s\n", cadeia);

    return 0;
}
