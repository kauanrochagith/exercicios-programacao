/*
 * Soma da Diagonal Secundária
 *
 * Lê os valores de uma matriz 3x3 e soma os elementos da diagonal
 * secundária (do canto superior direito ao canto inferior esquerdo).
 */
#include <stdio.h>

int main() {
    float matriz[3][3];
    float soma = 0;
    int i, j;

    /* Laços aninhados: i percorre as linhas e j percorre as colunas */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    /* Na diagonal secundária, linha + coluna = 2, ou seja, a coluna é 2 - i:
       [0][2], [1][1] e [2][0] */
    for (i = 0; i < 3; i++) {
        soma = soma + matriz[i][2 - i];
    }

    printf("\nSoma da diagonal secundaria: %.2f\n", soma);

    return 0;
}
