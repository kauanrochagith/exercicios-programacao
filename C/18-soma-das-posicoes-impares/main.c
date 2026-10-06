/*
 * Soma das Posições Ímpares
 *
 * Mostra os valores de um vetor de 10 posições e soma os valores
 * que estão nas posições (índices) ímpares: 1, 3, 5, 7 e 9.
 */
#include <stdio.h>

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int soma = 0;

    printf("\n Os valores em cada casa de seu vetor sao");
    for (i = 0; i < 10; i++) {
        printf("\n Vetor[%d] = %d", i, vetor[i]);
    }

    /* O teste é feito no índice (i), não no valor guardado */
    for (i = 0; i < 10; i++) {
        if (i % 2 != 0) {
            soma = soma + vetor[i];
        }
    }
    printf("\nO valor da soma das posicoes impares do seu vetor = %d\n", soma);
    return 0;
}
