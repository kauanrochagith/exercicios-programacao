/*
 * Tabela de Quadrados
 *
 * Mostra uma tabela com os números de 1 a 5 e o quadrado de cada um.
 */
#include <stdio.h>

int main() {
    int numero = 1;
    printf("Numero/Quadrado\n");

    while (numero <= 5) {
        /* \t insere uma tabulação para alinhar as colunas */
        printf("%d\t%d\n", numero, numero * numero);
        numero++;
    }
    return 0;
}
