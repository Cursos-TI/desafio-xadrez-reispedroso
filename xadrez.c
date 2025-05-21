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

int main() {
    // Movimentação do Bispo (diagonal superior direita = Cima + Direita)
    printf("Movimento do Bispo (%d casas na diagonal superior direita):\n", MOV_BISPO);
    for(int i = 1; i <= MOV_BISPO; i++) {
        printf("Cima + Direita - Casa %d\n", i);
    }

    // Movimentação da Torre (direita)
    printf("\nMovimento da Torre (%d casas para a direita):\n", MOV_TORRE);
    for(int i = 1; i <= MOV_TORRE; i++) {
        printf("Direita - Casa %d\n", i);
    }

    // Movimentação da Rainha (esquerda)
    printf("\nMovimento da Rainha (%d casas para a esquerda):\n", MOV_RAINHA);
    for(int i = 1; i <= MOV_RAINHA; i++) {
        printf("Esquerda - Casa %d\n", i);
    }

    return 0;
}