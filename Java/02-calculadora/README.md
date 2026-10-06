# Calculadora em Java

Lê dois números e deixa o usuário escolher uma operação em um menu: **soma, subtração, multiplicação ou divisão**. Não deixa dividir por zero.

## Conceitos praticados
- Entrada de dados com `Scanner`
- Menu de opções com `if / else if`
- Validação de entrada (opção inválida e divisão por zero)
- Saída formatada com `printf`

## Exemplo
```
Insira o primeiro numero: 10
Insira o segundo numero: 4
=== MENU ===
1 - Soma
2 - Subtracao
3 - Multiplicacao
4 - Divisao
Sua escolha: 4
10,00 / 4,00 = 2,50
```
No Windows em português, os decimais aparecem com vírgula, e você também digita com vírgula (ex.: `2,5`).

## Como compilar e executar
```
javac -encoding UTF-8 Calculadora.java
java Calculadora
```
