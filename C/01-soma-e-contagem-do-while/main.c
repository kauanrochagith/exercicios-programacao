/*
 * Soma e Contagem com Do-While
 *
 * Lê números digitados pelo usuário até que ele digite 0.
 * No final, mostra quantos números foram digitados (sem contar o 0)
 * e a soma de todos eles.
 */
#include <stdio.h>

int main() {
    int numero = 0;
    int quantidade = 0;
    int soma = 0;

    /* O do-while executa o bloco pelo menos uma vez, antes de testar a condição */
    do {
        printf("digite um numero\n");
        scanf("%d", &numero);

        /* O 0 serve apenas para encerrar, por isso não entra na soma nem na contagem */
        if (numero != 0) {
            soma = soma + numero;
            quantidade++;
        }
    } while (numero != 0);

    printf("\n Quantidade de numeros: %d\n", quantidade);
    printf("Soma:%d\n", soma);
    return 0;
}
