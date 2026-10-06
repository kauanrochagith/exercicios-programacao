/*
 * Intercalação de Vetores
 *
 * Lê dois vetores A e B de 6 posições e monta um vetor C:
 * as posições pares de C recebem o valor de A e as ímpares recebem o de B.
 */
#include <stdio.h>

int main() {
    int A[6], B[6], C[6];
    int i;

    printf("Digite os 6 elementos do vetor A:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &A[i]);
    }
    printf("Digite os 6 elementos do vetor B:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &B[i]);
    }

    /* Posição par pega de A, posição ímpar pega de B */
    for (i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            C[i] = A[i];
        } else {
            C[i] = B[i];
        }
    }

    printf("Vetor C:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
