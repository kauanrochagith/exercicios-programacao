/*
 * Diagonal, Linha e Coluna
 *
 * Em uma matriz 3x3 fixa, calcula a soma da diagonal principal,
 * da segunda linha e da primeira coluna.
 * (Exercício de prova)
 */
#include <stdio.h>

int main() {
    int valores[3][3] = {
        {6, 6, 3},
        {8, 8, 1},
        {2, 3, 1}
    };

    int diagonal = 0;
    int coluna = 0;
    int linha = 0;

    /* Diagonal principal: linha e coluna iguais ([0][0], [1][1], [2][2]) */
    diagonal = valores[0][0] + valores[1][1] + valores[2][2];

    /* Primeira coluna: a coluna fica fixa em 0 e a linha varia */
    coluna = valores[0][0] + valores[1][0] + valores[2][0];

    /* Segunda linha: a linha fica fixa em 1 e a coluna varia */
    linha = valores[1][0] + valores[1][1] + valores[1][2];

    printf("Soma da diagonal principal: %d\n", diagonal);
    printf("Soma da segunda linha: %d\n", linha);
    printf("Soma da primeira coluna: %d\n", coluna);

    return 0;
}
