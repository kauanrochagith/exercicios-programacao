# Exercícios de Programação

Coleção dos exercícios que fiz enquanto aprendia lógica de programação em **C** e **Java**: laços de repetição, vetores, matrizes e os primeiros passos em Java.

Cada exercício tem a própria pasta, com o código comentado e um `README.md` que explica o que ele faz, os conceitos praticados e como executar.

## C

### Laços de repetição (while / do-while)
| # | Exercício | O que faz |
|---|---|---|
| 01 | [Soma e Contagem com Do-While](C/01-soma-e-contagem-do-while) | Lê números até digitar 0 e mostra a soma e a quantidade |
| 02 | [Contagem de 1 a 4](C/02-contagem-de-1-a-4) | Imprime de 1 a 4 com while |
| 03 | [Pares de 1 a 4](C/03-pares-de-1-a-4) | Imprime os números pares de 1 a 4 |
| 04 | [Média dos Ímpares até 12](C/04-media-dos-impares-ate-12) | Mostra os ímpares de 1 a 12 e a média deles |
| 05 | [Maior Número Aleatório](C/05-maior-numero-aleatorio) | Gera números aleatórios até sair -1 e mostra o maior |
| 06 | [Tabela de Quadrados](C/06-tabela-de-quadrados) | Tabela dos números de 1 a 5 e seus quadrados |
| 07 | [Pesquisa de Audiência de TV](C/07-pesquisa-audiencia-tv) | Pesquisa o canal de 200 casas e calcula os percentuais |

### Vetores
| # | Exercício | O que faz |
|---|---|---|
| 08 | [Leitura e Exibição de Vetor](C/08-leitura-e-exibicao-de-vetor) | Lê 4 números e mostra cada posição |
| 09 | [Temperaturas Acima da Média](C/09-temperaturas-acima-da-media) | Mostra os dias com temperatura acima da média |
| 10 | [Intercalação de Vetores](C/10-intercalacao-de-vetores) | Monta o vetor C com as posições pares de A e as ímpares de B |
| 11 | [Maior Nota da Turma](C/11-maior-nota-da-turma) | Acha a maior nota e quem a tirou |
| 12 | [Busca com Contagem de Ocorrências](C/12-busca-com-contagem) | Procura um número e conta quantas vezes aparece |
| 13 | [Busca Simples em Vetor](C/13-busca-simples-em-vetor) | Mostra as posições de um número X |
| 14 | [Avaliação de Clientes](C/14-avaliacao-de-clientes) | Classifica notas em ruim, regular e boa |
| 15 | [Média de Pares e Ímpares](C/15-media-de-pares-e-impares) | Média separada dos números pares e ímpares |
| 16 | [Percentual de Positivos, Negativos e Zeros](C/16-percentual-positivos-negativos-zeros) | Porcentagem de cada tipo de número |
| 17 | [Detecção de Valores Repetidos](C/17-deteccao-de-repetidos) | Mostra os valores que se repetem |
| 18 | [Soma das Posições Ímpares](C/18-soma-das-posicoes-impares) | Soma os valores nas posições ímpares |

### Matrizes
| # | Exercício | O que faz |
|---|---|---|
| 19 | [Soma da Diagonal Secundária](C/19-soma-diagonal-secundaria) | Soma a diagonal secundária de uma matriz 3x3 |
| 20 | [Soma das Linhas Pares](C/20-soma-das-linhas-pares) | Soma das linhas pares guardada em um vetor |
| 21 | [Soma das Colunas Ímpares](C/21-soma-das-colunas-impares) | Soma das colunas ímpares de uma matriz 4x4 |

### Prova: vetores e matrizes
| # | Exercício | O que faz |
|---|---|---|
| 22 | [Diagonal, Linha e Coluna](C/22-diagonal-linha-e-coluna) | Soma da diagonal principal, da 2ª linha e da 1ª coluna |
| 23 | [Soma das Linhas para Vetor](C/23-soma-das-linhas-para-vetor) | Soma cada linha da matriz e guarda em um vetor |
| 24 | [Soma dos Pares do Vetor](C/24-soma-dos-pares-do-vetor) | Soma os números pares de um vetor |

## Java
| # | Exercício | O que faz |
|---|---|---|
| 01 | [Hello World em Java](Java/01-hello-world) | Primeiro programa: "Olá, mundo!" |
| 02 | [Calculadora em Java](Java/02-calculadora) | As 4 operações, com bloqueio de divisão por zero |

## Como executar

**C** (precisa do GCC, que já vem no Dev-C++ / MinGW):
```
gcc main.c -o programa
./programa
```

**Java** (precisa do JDK):
```
javac -encoding UTF-8 NomeDoArquivo.java
java NomeDoArquivo
```

