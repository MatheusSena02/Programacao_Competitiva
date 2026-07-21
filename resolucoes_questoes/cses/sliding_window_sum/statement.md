# Soma da Janela com XOR

O primeiro número da entrada contém dois inteiros $n$ e $k$: o número de elementos e o tamanho da janela, respectivamente.

A linha seguinte contém quatro inteiros $x$, $a$, $b$ e $c$: os parâmetros do gerador de entrada. A sequência é gerada da seguinte forma:

* $x_1 = x$
* $x_i = (a \cdot x_{i-1} + b) \pmod c$ para $i = 2, 3, \dots, n$

---

### Saída

Imprima o XOR ($\oplus$) de todas as somas de cada janela de tamanho $k$.

---

### Restrições

* $1 \le k \le n \le 10^7$
* $0 \le x, a, b \le 10^9$
* $1 \le c \le 10^9$

---

### Exemplo

**Entrada:**
```text
8 5
3 7 1 11
```
**Saída:**
```text
12
```