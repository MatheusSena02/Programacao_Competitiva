# Weird Algorithm (Algoritmo Estranho)

| Limite de tempo | Limite de memória |
| :--- | :--- |
| 1,00 s | 512 MB |

Considere um algoritmo que recebe como entrada um número inteiro positivo $n$. 

- Se $n$ for **par**, o algoritmo o divide por dois ($n / 2$).
- Se $n$ for **ímpar**, o algoritmo o multiplica por três e adiciona um ($3n + 1$).

O algoritmo repete esse processo até que $n$ seja igual a $1$. 

Por exemplo, a sequência para $n = 3$ é a seguinte:
$$3 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1$$

Sua tarefa é simular a execução do algoritmo para um determinado valor de $n$.

---

### Entrada
A única linha de entrada contém um número inteiro $n$.

### Saída
Imprima uma linha que contenha todos os valores de $n$ durante o algoritmo.

---

### Restrições
* $1 \le n \le 10^6$

---

### Exemplo

**Entrada:**
```text
3
```
**Saída:**
```text
3 10 5 16 8 4 2 1
```