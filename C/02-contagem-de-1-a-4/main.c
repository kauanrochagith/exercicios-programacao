/*
 * Contagem de 1 a 4
 *
 * Usa um laço while para imprimir os números de 1 a 4, um por linha.
 */
#include <stdio.h>

int main() {
    int i = 1; /* Contador começa em 1 */

    /* Repete enquanto o contador for menor ou igual a 4 */
    while (i <= 4) {
        printf("%d\n", i);
        i++; /* Sem o incremento o laço nunca terminaria */
    }
    return 0;
}
