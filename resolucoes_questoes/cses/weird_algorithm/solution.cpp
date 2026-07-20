// Inclui todas as bibliotecas padrão do C++ (útil em programação competitiva)
#include <bits/stdc++.h>

using namespace std;

// Cria um atalho 'll' para o tipo 'long long' (evita estouro de memória com números grandes)
#define ll long long

int main(){
    
    // Declara a variável 'n' como 'long long' para suportar grandes valores intermediários
    ll n; 
    
    // Lê o valor inicial fornecido pelo usuário
    cin >> n;

    // Loop infinito que continuará executando até encontrar o comando 'break'
    while(true){

        // Imprime o valor atual de 'n' seguido por um espaço
        cout << n << " "; 
        
        // CONDIÇÃO DE PARADA: Se 'n' chegou a 1, encerra o loop
        if(n == 1) break;

        // Regra do problema (Conjectura de Collatz):
        // Se 'n' for par, divide por 2
        if(n % 2 == 0){
            n /= 2;
        } 
        // Se 'n' for ímpar, multiplica por 3 e soma 1
        else{
            n = (n * 3) + 1;
        }
    }
    
    // Imprime uma quebra de linha final após terminar a sequência
    cout << "\n";
    
    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}