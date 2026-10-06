/*
 * Maior Número Aleatório
 *
 * Gera números aleatórios e imprime cada um até sair o valor -1.
 * No final, mostra o maior número gerado.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, maior;
    int primeiro = 1; /* Indica se ainda estamos no primeiro número gerado */

    /* Usa o horário atual como semente, para a sequência mudar a cada execução */
    srand(time(NULL));

    /* rand() % 50000 vai de 0 a 49999; subtraindo 1, a faixa passa a ser de -1 a 49998.
       Observação: no Windows o rand() só chega a 32767 (RAND_MAX), então na prática
       os valores ficam entre -1 e 32766. */
    numero = rand() % 50000 - 1;

    /* O -1 funciona como sinal de parada */
    while (numero != -1) {
        printf("%d\n", numero);

        /* O primeiro número vira o maior inicial; os seguintes são comparados com ele */
        if (primeiro) {
            maior = numero;
            primeiro = 0;
        } else if (numero > maior) {
            maior = numero;
        }

        numero = rand() % 50000 - 1;
    }

    /* Se o primeiro sorteio já foi -1, nenhum número válido foi gerado */
    if (primeiro)
        printf("Nenhum numero foi gerado.\n");
    else
        printf("Maior numero: %d\n", maior);

    return 0;
}
