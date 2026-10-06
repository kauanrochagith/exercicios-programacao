# Soma da Diagonal Secundária

Lê os valores de uma matriz 3x3 e soma os elementos da **diagonal secundária**, que vai do canto superior direito ao inferior esquerdo.

```
[ .  .  X ]
[ .  X  . ]
[ X  .  . ]
```

## Conceitos praticados
- Matriz bidimensional (`float matriz[3][3]`)
- Laços `for` aninhados para ler linhas e colunas
- Relação entre os índices da diagonal secundária: `coluna = 2 - linha`

## Exemplo
Com a matriz
```
1 2 3
4 5 6
7 8 9
```
a saída é:
```
Soma da diagonal secundaria: 15.00
```
(3 + 5 + 7 = 15)

## Como compilar e executar
```
gcc main.c -o programa
./programa
```
