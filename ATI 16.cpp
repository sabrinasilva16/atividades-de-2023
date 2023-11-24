#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    struct Pessoa pessoa;

    printf("Digite o nome: ");
    scanf("%s", pessoa.nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    while (getchar() != '\n');

    printf("Digite o endereco: ");
    fgets(pessoa.endereco, sizeof(pessoa.endereco), stdin);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereco: %s\n", pessoa.endereco);

    return 0;
}
