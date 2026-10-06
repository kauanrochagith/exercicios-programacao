/*
 * Busca com Contagem de Ocorrências
 *
 * Lê 10 números inteiros e depois um número para pesquisar.
 * Mostra em quais posições ele aparece e quantas vezes no total.
 */
#include <stdio.h>

int main() {
    int vet[10];
    int numero, i, contador = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\nDigite um numero para pesquisar: ");
    scanf("%d", &numero);

    /* Busca linear: compara o número com cada posição do vetor */
    for (i = 0; i < 10; i++) {
        if (vet[i] == numero) {
            contador++;
            printf("O numero aparece na posicao: %d\n", i);
        }
    }

    /* Se o contador continuou em 0, o número não foi encontrado */
    if (contador > 0) {
        printf("\nO numero existe no vetor.\n");
        printf("Ele aparece %d vezes.\n", contador);
    } else {
        printf("\nO numero nao existe no vetor.\n");
    }

    return 0;
}
