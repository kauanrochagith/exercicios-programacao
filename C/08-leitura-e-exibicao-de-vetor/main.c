/*
 * Leitura e Exibição de Vetor
 *
 * Lê 4 números inteiros, guarda em um vetor e depois mostra
 * o valor armazenado em cada posição.
 */
#include <stdio.h>

int main() {
    int x[4]; /* Vetor com 4 posições: 0, 1, 2 e 3 */
    int i;

    /* Preenche o vetor */
    for (i = 0; i <= 3; i++) {
        printf("Digite um numero para a posicao %d: ", i);
        scanf("%d", &x[i]);
    }

    /* Mostra o conteúdo de cada posição */
    printf("\nValores do vetor:\n");
    for (i = 0; i <= 3; i++) {
        printf("posicao %d = %d\n", i, x[i]);
    }
    return 0;
}
