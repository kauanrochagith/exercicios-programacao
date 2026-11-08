# Máquina de Refrigerante

Simula uma máquina de vendas: controla estoque, calcula o total de uma
compra, recusa pedidos inválidos (sem estoque ou dinheiro insuficiente) e
calcula o troco.

## Conceitos praticados
- Validações em sequência, cada uma com seu próprio motivo de recusa
- Atualização de estado (estoque e dinheiro arrecadado) só depois que
  todas as validações passam
- Cálculo de troco

## Saída
```
Compra realizada: 5 refrigerante(s) por R$ 22,50.
Troco: R$ 27,50
Estoque: 95 unidade(s)
Preço unitário: R$ 4,50
Dinheiro arrecadado: R$ 22,50
```

## Como compilar e executar
```
javac -encoding UTF-8 MaquinaRefri.java partmaquina.java
java partmaquina
```
