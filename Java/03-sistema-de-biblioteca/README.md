# Sistema de Biblioteca

Cadastro de livros com empréstimo e devolução, usando um menu em loop no
terminal. Primeiro exercício com duas classes separadas: uma para o objeto
(`biblioteca`) e outra para o programa principal (`partbiblioteca`).

## Conceitos praticados
- Separar a **classe de dados** (atributos, getters/setters) do **programa
  que usa essa classe** (menu, `main`)
- `ArrayList` para guardar vários livros
- `do-while` + `switch` para o menu
- Controle de estado de um objeto (`locacao`: emprestado ou disponível)

## Funcionalidades do menu
1. Listar livros
2. Cadastrar livro
3. Excluir livro
4. Pegar livro (emprestar)
5. Devolver livro
0. Sair

## Como compilar e executar
```
javac -encoding UTF-8 biblioteca.java partbiblioteca.java
java partbiblioteca
```
