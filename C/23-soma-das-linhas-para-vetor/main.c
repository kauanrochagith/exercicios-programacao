/*
 * Soma das Linhas para Vetor
 *
 * Soma cada linha de uma matriz 3x3 e guarda o resultado de cada
 * linha em uma posição de um vetor.
 * (Exercício de prova)
 */
#include <stdio.h>

int main() {
    int vetor[3];
    int soma[3] = {0, 0, 0}; /* Uma soma para cada linha, começando em zero */
    int valores[3][3] = {
        {5, 4, 1},
        {3, 2, 1},
        {3, 3, 3}
    };
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma[i] += valores[i][j];
        }
        /* Terminada a linha i, guarda o total no vetor */
        vetor[i] = soma[i];
    }

    for (i = 0; i < 3; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
