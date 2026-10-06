/*
 * Soma dos Pares do Vetor
 *
 * Mostra os valores de um vetor de 5 posições e soma os que são pares.
 * (Exercício de prova)
 */
#include <stdio.h>

int main() {
    int valores[5] = {1, 2, 3, 4, 5};
    int soma = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d\n", valores[i]);
    }

    /* Aqui o teste é feito no valor guardado, e não na posição */
    for (i = 0; i < 5; i++) {
        if (valores[i] % 2 == 0) {
            soma += valores[i];
        }
    }

    printf("Soma dos numeros pares: %d\n", soma);

    return 0;
}
