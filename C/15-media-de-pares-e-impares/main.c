/*
 * Média de Pares e Ímpares
 *
 * Lê 6 números inteiros, conta quantos são pares e quantos são ímpares
 * e calcula a média de cada grupo.
 */
#include <stdio.h>

int main() {
    int vet[6];
    int i;
    int pares = 0, impares = 0;
    int somaPares = 0, somaImpares = 0;
    float mediaPares, mediaImpares;

    printf("Digite 6 numeros inteiros:\n");

    for (i = 0; i < 6; i++) {
        scanf("%d", &vet[i]);

        if (vet[i] % 2 == 0) {
            pares++;
            somaPares = somaPares + vet[i];
        } else {
            impares++;
            somaImpares = somaImpares + vet[i];
        }
    }

    /* Só calcula a média se o grupo tiver algum número, evitando divisão por zero.
       O (float) converte a soma para que a divisão mantenha as casas decimais. */
    if (pares > 0) {
        mediaPares = (float)somaPares / pares;
    }
    if (impares > 0) {
        mediaImpares = (float)somaImpares / impares;
    }

    printf("Quantidade de valores pares: %d\n", pares);
    printf("Quantidade de valores impares: %d\n", impares);

    if (pares > 0) {
        printf("Media dos valores pares: %.2f\n", mediaPares);
    } else {
        printf("Nao existem valores pares.\n");
    }

    if (impares > 0) {
        printf("Media dos valores impares: %.2f\n", mediaImpares);
    } else {
        printf("Nao existem valores impares.\n");
    }

    return 0;
}
