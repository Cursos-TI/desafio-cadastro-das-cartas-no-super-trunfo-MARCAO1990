#include <stdio.h>
#include <stdbool.h>

//Tamanho do tabuleiro
#define LINHAS 10
#define COLUNAS 10


//Tabuleiroabuleiro com água (0)
void inicializarTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tabuleiro[i][j] = 0;  
        }
    }
}

//tabuleiro
void exibirTabuleiro(int tabuleiro[LINHAS][COLUNAS]) {
    printf("   A B C D E F G H I J\n");  
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1);  
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

//verificar se uma posição do navio está dentro dos limites do tabuleiro
bool verificarPosicaoValida(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna, int tamanho, bool horizontal) {
    if (horizontal) {
        // Verificar se a posição está dentro dos limites e se não há sobreposição
        if (coluna + tamanho > COLUNAS) return false;
        for (int i = 0; i < tamanho; i++) {
            if (tabuleiro[linha][coluna + i] != 0) {
                return false; 
            }
        }
    } else {
        // Verificar se a posição está dentro dos limites e se não há sobreposição
        if (linha + tamanho > LINHAS) return false;
        for (int i = 0; i < tamanho; i++) {
            if (tabuleiro[linha + i][coluna] != 0) {
                return false; 
            }
        }
    }
    return true;
}

// Função para posicionar um navio no tabuleiro
void posicionarNavio(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna, int tamanho, bool horizontal) {
    if (horizontal) {
        // Posicionar navio horizontalmente
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[linha][coluna + i] = 3; // 3 representa parte do navio
        }
    } else {
        // Posicionar navio verticalmente
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[linha + i][coluna] = 3; // 3 representa parte do navio
        }
    }
}

int main() {
    int tabuleiro[LINHAS][COLUNAS];
   printf("BATALHA NAVAL\n\n");
    
    // Inicializar o tabuleiro
    inicializarTabuleiro(tabuleiro);
    
    // Definir coordenadas e tamanho dos navios
    int linhaNavio1 = 2, colunaNavio1 = 3, tamanhoNavio1 = 3;
    int linhaNavio2 = 4, colunaNavio2 = 5, tamanhoNavio2 = 3;
    
    // Definir a orientação (horizontal = true, vertical = false)
    bool horizontalNavio1 = true;
    bool horizontalNavio2 = false;
    
    // Verificar se os navios podem ser posicionados e posicioná-los
    if (verificarPosicaoValida(tabuleiro, linhaNavio1, colunaNavio1, tamanhoNavio1, horizontalNavio1)) {
        posicionarNavio(tabuleiro, linhaNavio1, colunaNavio1, tamanhoNavio1, horizontalNavio1);
    } else {
        printf("Posição inválida para o navio 1.\n");
    }
    
    if (verificarPosicaoValida(tabuleiro, linhaNavio2, colunaNavio2, tamanhoNavio2, horizontalNavio2)) {
        posicionarNavio(tabuleiro, linhaNavio2, colunaNavio2, tamanhoNavio2, horizontalNavio2);
    } else {
        printf("Posição inválida para o navio 2.\n");
    }

    // Exibir o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}