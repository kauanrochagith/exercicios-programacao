/*
 * Temperaturas Acima da Média
 *
 * A partir das temperaturas de 7 dias, calcula a média e mostra
 * quais dias ficaram acima dela e quantos foram.
 */
#include <stdio.h>

int main() {
    int vet1[7] = {15, 26, 37, 43, 15, 16, 27}; /* Temperatura de cada dia */
    int i, acima = 0;
    float media, soma = 0;

    /* Soma todas as temperaturas */
    for (i = 0; i <= 6; i++) {
        soma += vet1[i];
    }
    media = soma / 7;

    /* Mostra e conta os dias com temperatura acima da média */
    for (i = 0; i <= 6; i++) {
        if (vet1[i] > media) {
            acima++;
            printf("Posicao %d - Temperatura: %d graus\n", i, vet1[i]);
        }
    }
    printf("Media das temperaturas: %f\n", media);
    printf("Quantidade de dias acima da media: %d\n", acima);

    /* Lista só as posições dos dias acima da média */
    for (i = 0; i <= 6; i++) {
        if (vet1[i] > media) {
            printf("posicoes dos dias acima da media: %d\n", i);
        }
    }

    return 0;
}
