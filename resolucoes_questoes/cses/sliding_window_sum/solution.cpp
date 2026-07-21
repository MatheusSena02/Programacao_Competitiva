#include <bits/stdc++.h>

using namespace std;

// Define o atalho 'll' para 'long long' (evita ter que digitar tudo toda hora)
#define ll long long

int main(){

    // Otimização de Entrada/Saída: Desativa a sincronização com stdio do C
    // e desacopla cin/cout, evitando TLE em problemas com N grande
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Lê a quantidade de elementos (n) e o tamanho da janela (k)
    ll n, k; 
    cin >> n >> k;

    // Parâmetros do Gerador Congruencial Linear (LCG) para criar a sequência de números
    ll x, a, b, c; 
    cin >> x >> a >> b >> c;

    // Vetor para armazenar os elementos gerados (usando ll para evitar overflow)
    vector<ll> ai(n);

    // Gerando o vetor ai[] recursivamente:
    // a[0] = x
    // a[i] = (a * a[i-1] + b) % c
    for(ll i = 0; i < n; i++){
        if(i == 0){
            ai[i] = x;
        } else {
            ai[i] = (a * ai[i - 1] + b) % c; 
        }
    }

    // Variável para armazenar a soma da janela atual de tamanho k
    ll windowSum = 0;

    // Calcula a soma da primeira janela de tamanho k (índices 0 até k-1)
    for(ll j = 0; j < k; j++){
        windowSum += ai[j];
    }

    // Inicializa a resposta com a soma da primeira janela
    ll answer = windowSum;

    // Algoritmo de Janela Deslizante (Sliding Window):
    // Move a janela um elemento para a direita a cada passo.
    // Soma o novo elemento que entra (ai[l]) e subtrai o antigo que sai (ai[l - k]).
    for(ll l = k; l < n; l++){
        windowSum += ai[l] - ai[l - k]; 

        // Aplica a operação XOR acumulada entre o resultado atual e a nova soma
        answer = answer ^ windowSum;
    }

    // Imprime o resultado final (usando "\n" em vez de endl para ser mais rápido)
    cout << answer << "\n";

    return 0;
}