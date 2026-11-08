# Sistema de Produtos

CRUD completo de produtos em um menu de terminal: cadastrar, listar,
buscar por ID, atualizar e excluir, com geração automática de ID e
validação de entrada numérica.

## Conceitos praticados
- CRUD (Create, Read, Update, Delete) com uma `ArrayList`
- Reaproveitamento de um método de busca (`buscarProdutoPorId`) em várias
  operações diferentes
- Leitura robusta de números (`lerInteiro`/`lerDouble`), repetindo a
  pergunta até o usuário digitar um valor válido
- `toString()` para exibir o objeto de forma legível

## Menu
1. Cadastrar
2. Listar todos
3. Buscar por ID
4. Atualizar
5. Excluir
0. Sair

## Como compilar e executar
```
javac -encoding UTF-8 Produto.java Principal.java
java Principal
```
