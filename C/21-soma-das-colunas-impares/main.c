/*
 * Soma das Colunas Ímpares
 *
 * Soma os elementos de cada coluna de índice ímpar (1 e 3) de uma matriz 4x4
 * e guarda os resultados em um vetor.
 */
#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int vetor[2];    /* Só há duas colunas ímpares: a 1 e a 3 */
    int i, j;
    int posicao = 0;
    int soma;

    /* Aqui o laço de fora percorre as colunas (j) e o de dentro, as linhas (i) */
    for (j = 0; j < 4; j++) {
        if (j % 2 != 0) {
            soma = 0;

            for (i = 0; i < 4; i++) {
                soma = soma + matriz[i][j];
            }

            vetor[posicao] = soma;
            posicao++;
        }
    }

    printf("Vetor com as somas das colunas impares:\n");
    for (i = 0; i < 2; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
