/*
 * Busca Simples em Vetor
 *
 * Lê 10 números inteiros e um número X. Mostra as posições em que
 * X aparece ou avisa que ele não existe no vetor.
 */
#include <stdio.h>

int main() {
    int vet[10];
    int X, i, encontrou = 0; /* encontrou funciona como um "sinalizador" (0 = não, 1 = sim) */

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\nDigite um numero X para pesquisar: ");
    scanf("%d", &X);

    for (i = 0; i < 10; i++) {
        if (vet[i] == X) {
            printf("O numero %d aparece na posicao: %d\n", X, i);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("O numero %d nao existe no vetor.\n", X);
    }

    return 0;
}
