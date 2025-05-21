#include <stdio.h>

// Constantes para direções
#define CIMA 0
#define BAIXO 1
#define ESQUERDA 2
#define DIREITA 3

// Constantes para número de casas
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8
#define MOV_L_VERTICAL 2    // Cavalo: 2 casas na vertical
#define MOV_L_HORIZONTAL 1  // Cavalo: 1 casa na horizontal

int main() {
    /* ===== NÍVEL NOVATO ===== */
    // Movimentação do Bispo (diagonal superior direita = Cima + Direita)
    printf("=== Movimento do Bispo (%d casas na diagonal superior direita) ===\n", MOV_BISPO);
    for(int i = 1; i <= MOV_BISPO; i++) {
        printf("Cima + Direita - Casa %d\n", i);
    }

    // Movimentação da Torre (direita)
    printf("\n=== Movimento da Torre (%d casas para a direita) ===\n", MOV_TORRE);
    for(int i = 1; i <= MOV_TORRE; i++) {
        printf("Direita - Casa %d\n", i);
    }

    // Movimentação da Rainha (esquerda)
    printf("\n=== Movimento da Rainha (%d casas para a esquerda) ===\n", MOV_RAINHA);
    for(int i = 1; i <= MOV_RAINHA; i++) {
        printf("Esquerda - Casa %d\n", i);
    }

    /* ===== NÍVEL AVENTUREIRO ===== */
    // Movimentação do Cavalo (em L: 2 casas para baixo + 1 para esquerda)
    printf("\n=== Movimento do Cavalo (em L) ===\n");
    
    // Parte vertical do L (2 casas para baixo)
    for(int v = 1; v <= MOV_L_VERTICAL; v++) {
        printf("Baixo - Casa %d\n", v);
        
        // Parte horizontal do L (1 casa para esquerda)
        // Só executa após completar as 2 casas verticais
        int h = 0;
        while(h < MOV_L_HORIZONTAL && v == MOV_L_VERTICAL) {
            printf("Esquerda - Casa %d\n", h+1);
            h++;
        }
    }

    return 0;
}