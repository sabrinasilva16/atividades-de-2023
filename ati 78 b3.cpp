#include <stdio.h>

int main() {
    int tamanho = 15;

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor completo:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Posicoes com valores multiplos de 10:\n");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 10 == 0) {
            printf("Posicao %d: %d\n", i, vetor[i]);
        }
    }

    return 0;
}
