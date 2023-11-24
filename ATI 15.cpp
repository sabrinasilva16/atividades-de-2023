#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];

    printf("Digite a primeira string: ");
    gets(str1);

    printf("Digite a segunda string: ");
    gets(str2);

    if (strcmp(str1, str2) < 0) {
        printf("Em ordem alfabetica: %s, %s\n", str1, str2);
    } else {
        printf("Em ordem alfabetica: %s, %s\n", str2, str1);
    }

    return 0;
}
