/*
 * Média dos Ímpares até 12
 *
 * Imprime os números ímpares de 1 a 12 e calcula a média deles.
 */
#include <stdio.h>

int main() {
    int i = 1;
    float soma = 0;
    float media;

    while (i <= 12) {
        /* Resto diferente de 0 na divisão por 2 = número ímpar */
        if (i % 2 != 0) {
            soma += i;
            printf("%d\n", i);
        }
        i++;
    }

    /* Entre 1 e 12 existem 6 ímpares: 1, 3, 5, 7, 9 e 11 */
    media = soma / 6;
    printf(" media: %.2f", media);
    return 0;
}
