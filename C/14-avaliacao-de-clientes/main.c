/*
 * Avaliação de Clientes
 *
 * Lê as notas (de 0 a 10) dadas por 10 clientes e classifica cada uma:
 *   0 a 4  -> ruim
 *   5 a 7  -> regular
 *   8 a 10 -> boa
 * No final, mostra quantas avaliações há em cada categoria e a média geral.
 */
#include <stdio.h>

int main() {
    int notas[10];
    int i;
    int ruins = 0, regulares = 0, boas = 0;
    float soma = 0, media;

    printf("Digite as notas dos 10 clientes:\n");

    /* Lê, acumula e classifica cada nota no mesmo laço */
    for (i = 0; i < 10; i++) {
        scanf("%d", &notas[i]);

        soma = soma + notas[i];

        if (notas[i] >= 0 && notas[i] <= 4) {
            ruins++;
        } else if (notas[i] >= 5 && notas[i] <= 7) {
            regulares++;
        } else if (notas[i] >= 8 && notas[i] <= 10) {
            boas++;
        }
    }

    media = soma / 10;

    printf("Quantidade de avaliacoes ruins: %d\n", ruins);
    printf("Quantidade de avaliacoes regulares: %d\n", regulares);
    printf("Quantidade de avaliacoes boas: %d\n", boas);
    printf("Media das avaliacoes: %.2f\n", media);

    return 0;
}
