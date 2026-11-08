# Cofrinho

Simula um cofrinho de poupança com depósito, retirada e acompanhamento de
uma meta de economia.

## Conceitos praticados
- Validação de valores (depósito negativo, retirada maior que o saldo)
- Cálculo de quanto falta para bater uma meta
- Uso de um objeto ao longo de várias operações seguidas

## Saída
```
Deposito de R$ 200.0 realizado.
Deposito de R$ 150.0 realizado.
Valor invalido! O deposito deve ser positivo.
Dono: Maria
Saldo atual: R$ 350.0
Saldo insuficiente para retirar R$ 1000.0.
Dono: Maria
Saldo atual: R$ 350.0
A meta ainda nao foi atingida. Faltam R$ 150.0
```

## Como compilar e executar
```
javac -encoding UTF-8 Cofrinho.java ProgramaCofrinho.java
java ProgramaCofrinho
```
