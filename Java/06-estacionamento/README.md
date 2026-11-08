# Estacionamento

Calcula o valor a pagar por um veículo estacionado, com uma tarifa fixa
para os primeiros 30 minutos e um valor por minuto extra depois disso,
limitado a um teto máximo.

## Conceitos praticados
- Regra de negócio com faixas de valor (tarifa fixa + variável)
- `Math.min` para aplicar um teto ao valor calculado
- Acúmulo de tempo em várias chamadas (`adicionartempo`)

## Saída
```
Placa: afg3
Modelo: honda
Tempo estacionado: 105 minutos
Valor pago: R$ 12,50
```

## Como compilar e executar
```
javac -encoding UTF-8 Estacionamentoo.java partEstacionamento.java
java partEstacionamento
```
