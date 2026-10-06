/*
 * Soma das Linhas Pares
 *
 * Soma os elementos de cada linha de índice par (0 e 2) de uma matriz 3x3
 * e guarda os resultados em um vetor.
 */
#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int vetor[2];    /* Só há duas linhas pares: a 0 e a 2 */
    int i, j;
    int posicao = 0; /* Próxima posição livre do vetor */
    int soma;

    for (i = 0; i < 3; i++) {
        if (i % 2 == 0) {
            /* Zera a soma antes de somar cada nova linha */
            soma = 0;

            for (j = 0; j < 3; j++) {
                soma = soma + matriz[i][j];
            }

            vetor[posicao] = soma;
            posicao++;
        }
    }

    printf("Vetor com as somas das linhas pares:\n");
    for (i = 0; i < 2; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
