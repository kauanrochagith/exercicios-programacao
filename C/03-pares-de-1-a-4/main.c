/*
 * Pares de 1 a 4
 *
 * Percorre os números de 1 a 4 com while e imprime apenas os pares.
 */
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 4) {
        /* O resto da divisão por 2 diferente de 1 significa que o número é par */
        if (i % 2 != 1) {
            printf("%d\n", i);
        }

        i++;
    }
    return 0;
}
