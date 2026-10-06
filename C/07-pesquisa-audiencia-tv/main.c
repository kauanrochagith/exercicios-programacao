/*
 * Pesquisa de Audiência de TV
 *
 * Simula uma pesquisa em 200 casas: para cada uma, o usuário informa em
 * qual canal a TV está (2, 4, 6, 7 ou 12) ou 0 se estiver desligada.
 * No final, mostra quantas TVs estavam em cada canal e o percentual.
 */
#include <stdio.h>

int main() {
    int canal;
    int i = 1; /* Número da casa pesquisada */

    /* Um contador para cada canal e outro para TVs desligadas */
    int c2 = 0, c4 = 0, c6 = 0, c7 = 0, c12 = 0, desligada = 0;

    while (i <= 200) {
        printf("Casa %d - Digite o canal (0, 2, 4, 6, 7 ou 12): ", i);

        /* Se o usuário digitar algo que não é número (ex.: uma letra), o scanf falha
           e o texto fica preso na entrada. Por isso ele é descartado e a pergunta se repete. */
        if (scanf("%d", &canal) != 1) {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            if (c == EOF) {
                return 1; /* A entrada acabou: encerra o programa */
            }
            canal = -1; /* Valor inválido, cai no default */
        }

        /* O switch escolhe qual contador aumentar */
        switch (canal) {
            case 0:
                desligada++;
                break;
            case 2:
                c2++;
                break;
            case 4:
                c4++;
                break;
            case 6:
                c6++;
                break;
            case 7:
                c7++;
                break;
            case 12:
                c12++;
                break;
            default:
                printf("Canal invalido! Tente novamente.\n");
                continue; /* Volta ao início do while sem passar pelo i++, repetindo a mesma casa */
        }

        i++;
    }

    printf("\nRESULTADO DA PESQUISA\n");
    printf("----------------------\n");

    /* Multiplicar por 100.0 (e não 100) força a conta a ser feita com casas decimais */
    printf("Canal 2 : %d TVs (%.2f%%)\n", c2, (c2 * 100.0) / 200);
    printf("Canal 4 : %d TVs (%.2f%%)\n", c4, (c4 * 100.0) / 200);
    printf("Canal 6 : %d TVs (%.2f%%)\n", c6, (c6 * 100.0) / 200);
    printf("Canal 7 : %d TVs (%.2f%%)\n", c7, (c7 * 100.0) / 200);
    printf("Canal 12: %d TVs (%.2f%%)\n", c12, (c12 * 100.0) / 200);
    printf("Desligadas: %d TVs (%.2f%%)\n", desligada, (desligada * 100.0) / 200);

    return 0;
}
