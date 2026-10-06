# Maior Número Aleatório

Gera números aleatórios e imprime cada um até sair o **-1**. No final, mostra o maior número gerado.

## Conceitos praticados
- Números aleatórios com `rand()` e `srand(time(NULL))`
- Laço `while` com valor sentinela
- Busca do maior valor com uma variável de controle (`primeiro`)

## Exemplo
```
18467
6334
26500
...
Maior numero: 32391
```
A saída muda a cada execução e pode ter milhares de linhas.

## Observação
No Windows, `rand()` só gera valores até 32767 (`RAND_MAX`), então os números ficam entre -1 e 32766, e não até 49998.

## Como compilar e executar
```
gcc main.c -o programa
./programa
```
