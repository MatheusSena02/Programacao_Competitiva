# Pesquisa Binária

A **pesquisa binária** é um algoritmo utilizado para encontrar elementos em uma coleção **ordenada**.

Em vez de verificar cada elemento individualmente, o algoritmo divide o intervalo de busca pela metade a cada iteração. Isso reduz significativamente a quantidade de operações necessárias para localizar um elemento.

> A pesquisa binária só pode ser utilizada quando os elementos estão devidamente ordenados.

## Comparação de complexidade

| Algoritmo        | Complexidade | Descrição                                                                     |
| ---------------- | -----------: | ----------------------------------------------------------------------------- |
| Pesquisa linear  |       `O(n)` | A quantidade de operações aumenta proporcionalmente ao tamanho da lista.      |
| Pesquisa binária |   `O(log n)` | A quantidade de operações cresce lentamente em relação ao tamanho da entrada. |

## Exemplo

Considere a busca por um número em uma lista ordenada contendo **100 elementos**.

### Pesquisa linear

A pesquisa linear verifica os elementos um por um até encontrar o valor desejado.

* **Melhor caso:** o elemento está na primeira posição;
* **Pior caso:** são necessárias até **100 operações**.

### Pesquisa binária

A pesquisa binária divide o conjunto pela metade, verifica em qual intervalo o elemento pode estar e repete o processo até encontrá-lo.

* **Melhor caso:** o elemento está na posição central;
* **Pior caso:** são necessárias aproximadamente **7 operações**.

Isso ocorre porque:

```text
100 → 50 → 25 → 12 → 6 → 3 → 1
```

Portanto, para uma lista com 100 elementos:

```text
Pesquisa linear: O(n)     → até 100 operações
Pesquisa binária: O(log n) → aproximadamente 7 operações
```
