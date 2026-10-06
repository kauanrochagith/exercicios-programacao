/*
 * Detecção de Valores Repetidos
 *
 * Lê 8 números inteiros e mostra cada valor que aparece mais de uma vez,
 * junto com quantas vezes ele aparece. Se nenhum se repetir, avisa.
 */
#include <stdio.h>

int main() {
    int vet[8];
    int i, j;
    int contador;
    int jaContado;
    int repetido = 0; /* Sinaliza se algum valor repetido foi encontrado */

    printf("Digite 8 numeros inteiros:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 8; i++) {
        /* Verifica se esse valor já apareceu antes no vetor,
           para mostrar cada número repetido uma vez só */
        jaContado = 0;
        for (j = 0; j < i; j++) {
            if (vet[j] == vet[i]) {
                jaContado = 1;
            }
        }
        if (jaContado) {
            continue;
        }

        /* Conta quantas vezes o valor aparece da posição atual em diante */
        contador = 1;
        for (j = i + 1; j < 8; j++) {
            if (vet[i] == vet[j]) {
                contador++;
            }
        }

        if (contador > 1) {
            printf("O valor %d aparece %d vezes.\n", vet[i], contador);
            repetido = 1;
        }
    }

    if (repetido == 0) {
        printf("Nao existe nenhum valor repetido.\n");
    }

    return 0;
}
