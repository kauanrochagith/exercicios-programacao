# Campeonato de Futebol

Simula dois times disputando partidas e compara a pontuação final, como
numa tabela de campeonato (vitória = 3 pontos, empate = 1, derrota = 0).

## Conceitos praticados
- Classe `Time` guardando o estado de cada time (vitórias, empates,
  derrotas, pontos)
- Métodos que alteram o próprio objeto (`registrarVitoria`, etc.)
- Comparação de objetos para decidir o resultado final

## Saída
```
Time: Flamengo
Vitorias: 2
Empates: 1
Derrotas: 1
Pontos: 7

Time: Palmeiras
Vitorias: 1
Empates: 2
Derrotas: 1
Pontos: 5

Flamengo tem mais pontos!
```

## Como compilar e executar
```
javac -encoding UTF-8 Time.java Campeonato.java
java Campeonato
```
