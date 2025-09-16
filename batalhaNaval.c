#include <stdio.h>

int main() {
    int TAM = 10;       // tamanho do tabuleiro
    int TAM_NAVIO = 3;  // tamanho fixo dos navios

    // Tabuleiro (matriz bidimensional)
    int tabuleiro[10][10];

    // Inicializa tabuleiro com 0 (água)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Navios (arrays unidimensionais)
    int navioH[3] = {3, 3, 3}; // navio horizontal
    int navioV[3] = {3, 3, 3}; // navio vertical

    // Coordenadas iniciais dos navios
    int linhaH = 2, colunaH = 4; // posição inicial navio horizontal
    int linhaV = 5, colunaV = 7; // posição inicial navio vertical

    // Posiciona navio horizontal
    for (int j = 0; j < TAM_NAVIO; j++) {
        tabuleiro[linhaH][colunaH + j] = navioH[j];
    }

    // Posiciona navio vertical
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = navioV[i];
    }

    // Exibe tabuleiro
    printf("\n=== TABULEIRO ===\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}