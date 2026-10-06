/*
 * Maior Nota da Turma
 *
 * Lê as notas de 5 alunos, encontra a maior e mostra a posição
 * de todos os alunos que tiraram essa nota (pode haver empate).
 */
#include <stdio.h>

int main() {
    int notas[5];
    int i, maior;

    printf("Digite as notas dos 5 alunos:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &notas[i]);
    }

    /* Começa supondo que a primeira nota é a maior e compara com as demais */
    maior = notas[0];
    for (i = 1; i < 5; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    printf("\nMaior nota: %d\n", maior);
    printf("Posicao do(s) aluno(s) com a maior nota:\n");

    /* Percorre de novo para achar todos os empatados na maior nota */
    for (i = 0; i < 5; i++) {
        if (notas[i] == maior) {
            printf("Posicao: %d\n", i);
        }
    }

    return 0;
}
