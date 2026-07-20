#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    class Solution {
    public:
        vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
            // 1. Descobre as dimensões da matriz original
            int linhas = grid.size();
            int colunas = grid[0].size();
            
            // Quantidade total de elementos no "tabuleiro"
            int total = linhas * colunas;

            // 2. Normaliza o k usando o resto da divisão.
            // Se k for maior que o total, ignora as voltas completas na matriz.
            k = k % total;

            // 3. Cria a matriz onde vamos guardar o resultado final
            vector<vector<int>> result(linhas, vector<int>(colunas));
            
            // 4. Descobre em qual índice 1D está o PRIMEIRO elemento que deve ir para result[0][0].
            // Exemplo: Se total = 9 e k = 2, começamos a ler do índice 7 (9 - 2).
            int index_1d = (total - k) % total;

            // 5. Percorre a matriz de resultado preenchendo célula por célula
            for (int a = 0; a < linhas; a++) {
                for (int b = 0; b < colunas; b++) {
                    
                    // Converte o índice 1D atual para as coordenadas (linha, coluna) da matriz original
                    int orig_linha = index_1d / colunas; // Divisão inteira descobre a linha
                    int orig_coluna = index_1d % colunas; // Resto descobre a coluna

                    // Copia o valor da matriz original para a posição atual do resultado
                    result[a][b] = grid[orig_linha][orig_coluna];

                    // Avança para o próximo elemento do vetor virtual 1D.
                    // O '% total' garante que, se passar do fim, ele volte para o índice 0.
                    index_1d = (index_1d + 1) % total;
                }
            }

            // 6. Retorna a nova matriz deslocada
            return result;
        }
    };
}