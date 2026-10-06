# Pesquisa de Audiência de TV

Simula uma pesquisa de audiência em **200 casas**. Para cada casa, o usuário informa o canal sintonizado (2, 4, 6, 7 ou 12) ou **0** se a TV estiver desligada. No final, o programa mostra quantas TVs estavam em cada canal e o percentual de cada um.

## Conceitos praticados
- Laço `while`
- `switch/case` para escolher qual contador aumentar
- `continue` para repetir a mesma casa quando o canal é inválido
- Cálculo de porcentagem com casas decimais

## Exemplo de saída
```
RESULTADO DA PESQUISA
----------------------
Canal 2 : 40 TVs (20.00%)
Canal 4 : 30 TVs (15.00%)
Canal 6 : 20 TVs (10.00%)
Canal 7 : 50 TVs (25.00%)
Canal 12: 35 TVs (17.50%)
Desligadas: 25 TVs (12.50%)
```

## Como compilar e executar
```
gcc main.c -o programa
./programa
```
