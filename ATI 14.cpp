#include <stdio.h>
#include <string.h>

#define NUM_CARROS 5
#define MAX_MODELO 50

int main() {
    char modelos[NUM_CARROS][MAX_MODELO];
    float consumo[NUM_CARROS];
    float distancia = 1000;

    
    for (int i = 0; i < NUM_CARROS; i++) {
        printf("Digite o modelo do carro %d: ", i + 1);
        scanf("%s", modelos[i]);

        printf("Digite o consumo do carro %d (em km/l): ", i + 1);
        scanf("%f", &consumo[i]);
    }

    
    int indice_modelo_mais_economico = 0;
    for (int i = 1; i < NUM_CARROS; i++) {
        if (consumo[i] > 0 && consumo[i] < consumo[indice_modelo_mais_economico]) {
            indice_modelo_mais_economico = i;
        }
    }

    
    printf("O modelo mais economico e: %s\n", modelos[indice_modelo_mais_economico]);

    
    printf("Consumo para percorrer 1000 km:\n");
    for (int i = 0; i < NUM_CARROS; i++) {
        if (consumo[i] > 0) {
            float consumo_para_1000km = distancia / consumo[i];
            printf("%s: %.2f litros\n", modelos[i], consumo_para_1000km);
        }
    }

    return 0;
}
