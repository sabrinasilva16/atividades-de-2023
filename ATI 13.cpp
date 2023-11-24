#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define MAX_NOME 50

int main() {
    char nome[MAX_NOME];
    int idade;
    int idade_minima = INT_MAX;
    int idade_maxima = INT_MIN;
    char nome_minimo[MAX_NOME];
    char nome_maximo[MAX_NOME];

    for (int i = 0; i < 10; i++) {
        // Entrada da idade
        printf("Digite a idade da pessoa %d (ou uma idade negativa para encerrar): ", i + 1);
        scanf("%d", &idade);

        // Verificar se a idade e negativa para encerrar o programa
        if (idade < 0) {
            break;
        }

        // Entrada do nome
        printf("Digite o primeiro nome da pessoa %d: ", i + 1);
        scanf("%s", nome);

        // Atualizar idade minima e maxima
        if (idade < idade_minima) {
            idade_minima = idade;
            strncpy(nome_minimo, nome, MAX_NOME - 1);
            nome_minimo[MAX_NOME - 1] = '\0';  // Garante que o nome seja terminado corretamente
        }

        if (idade > idade_maxima) {
            idade_maxima = idade;
            strncpy(nome_maximo, nome, MAX_NOME - 1);
            nome_maximo[MAX_NOME - 1] = '\0';  // Garante que o nome seja terminado corretamente
        }
    }

    // Exibir informacoes sobre a pessoa mais jovem e mais velha
    printf("A pessoa mais jovem e %s com %d anos.\n", nome_minimo, idade_minima);
    printf("A pessoa mais velha e %s com %d anos.\n", nome_maximo, idade_maxima);

    return 0;
}
