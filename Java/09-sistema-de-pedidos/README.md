# Sistema de Pedidos

Monta um pedido de lanchonete: adiciona lanches em várias etapas, aplica
desconto a partir de 3 unidades, soma a taxa de entrega e bloqueia
alterações depois que o pedido é finalizado.

## Conceitos praticados
- Desconto condicional (10% a partir de 3 lanches)
- Bloqueio de operação com base no `status` do objeto
- Retorno `boolean` para indicar se uma operação deu certo

## Saída
```
Total do pedido: R$ 55.6
Pedido finalizado!
Cliente: Joao
Lanches: 3
Preco de cada lanche: R$ 18.0
Taxa de entrega: R$ 7.0
Status: Finalizado
Total: R$ 55.6
-------------------
Nao foi possivel adicionar, o pedido ja foi finalizado.
```

## Como compilar e executar
```
javac -encoding UTF-8 Pedido.java ProgramaPedido.java
java ProgramaPedido
```
