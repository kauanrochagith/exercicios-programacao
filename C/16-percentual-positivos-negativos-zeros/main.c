/*
 * Percentual de Positivos, Negativos e Zeros
 *
 * Lê 6 números inteiros, conta quantos são positivos, negativos e zeros
 * e mostra o percentual de cada grupo.
 */
#include <stdio.h>

int main() {
    int vet[6];
    int i;
    int positivos = 0, negativos = 0, zeros = 0;
    float percentualPositivos, percentualNegativos, percentualZeros;

    printf("Digite 6 numeros inteiros:\n");

    for (i = 0; i < 6; i++) {
        scanf("%d", &vet[i]);

        if (vet[i] > 0) {
            positivos++;
        } else if (vet[i] < 0) {
            negativos++;
        } else {
            zeros++;
        }
    }

    /* percentual = quantidade / total * 100; o (float) evita que a divisão inteira dê 0 */
    percentualPositivos = (float)positivos / 6 * 100;
    percentualNegativos = (float)negativos / 6 * 100;
    percentualZeros = (float)zeros / 6 * 100;

    printf("Quantidade de positivos: %d\n", positivos);
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Quantidade de zeros: %d\n", zeros);

    /* %% imprime o próprio símbolo de porcentagem */
    printf("Percentual de positivos: %.2f%%\n", percentualPositivos);
    printf("Percentual de negativos: %.2f%%\n", percentualNegativos);
    printf("Percentual de zeros: %.2f%%\n", percentualZeros);

    return 0;
}
