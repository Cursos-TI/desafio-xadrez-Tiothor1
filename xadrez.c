#include <stdio.h>

// Definição de constantes para os movimentos das peças
#define BISPO_MOV 5   // O bispo se move 5 casas na diagonal
#define TORRE_MOV 5   // A torre se move 5 casas em linha reta
#define RAINHA_MOV 8  // A rainha se move 8 casas em qualquer direção

// Definição de constantes para as direções
#define DIREITA 1  
#define ESQUERDA 2
#define CIMA 3
#define BAIXO 4

// Direções específicas para o Bispo
#define DIR_CIMA 1   // Diagonal superior direita
#define DIR_BAIXO 2  // Diagonal inferior direita
#define ESQ_CIMA 3   // Diagonal superior esquerda
#define ESQ_BAIXO 4  // Diagonal inferior esquerda

int main() {
    int escolha, direcao; // Variáveis para armazenar a escolha do usuário
    int i; // Variável de controle para os loops de movimentação

    // Exibe o menu de escolha da peça
    printf("Escolha a peça para movimentar:\n");
    printf("1 - Bispo\n2 - Torre\n3 - Rainha\n");
    scanf("%d", &escolha);

    // Se o jogador escolheu o Bispo, mostramos opções específicas para ele
    if (escolha == 1) {
        printf("Escolha a direcao do movimento do Bispo:\n");
        printf("1 - Direita Cima\n2 - Direita Baixo\n3 - Esquerda Cima\n4 - Esquerda Baixo\n");
        scanf("%d", &direcao);
    } else {
        // Para Torre e Rainha, usamos direções tradicionais
        printf("Escolha a direcao do movimento:\n");
        printf("1 - Direita\n2 - Esquerda\n3 - Cima\n4 - Baixo\n");
        scanf("%d", &direcao);
    }

    // Verifica qual peça foi escolhida e realiza a movimentação correspondente
    if (escolha == 1) { // Movimento do Bispo
        printf("Movendo Bispo:\n");
        for (i = 0; i < BISPO_MOV; i++) {
            if (direcao == DIR_CIMA) {
                printf("Direita Cima\n");
            } else if (direcao == DIR_BAIXO) {
                printf("Direita Baixo\n");
            } else if (direcao == ESQ_CIMA) {
                printf("Esquerda Cima\n");
            } else if (direcao == ESQ_BAIXO) {
                printf("Esquerda Baixo\n");
            }
        }
    } 
    else if (escolha == 2) { // Movimento da Torre
        printf("Movendo Torre:\n");
        for (i = 0; i < TORRE_MOV; i++) {
            if (direcao == DIREITA) {
                printf("Direita\n");
            } else if (direcao == ESQUERDA) {
                printf("Esquerda\n");
            } else if (direcao == CIMA) {
                printf("Cima\n");
            } else if (direcao == BAIXO) {
                printf("Baixo\n");
            }
        }
    }
    else if (escolha == 3) { // Movimento da Rainha
        printf("Movendo Rainha\n");
        for (i = 0; i < RAINHA_MOV; i++) {
            if (direcao == DIREITA) {
                printf("Direita\n");
            } else if (direcao == ESQUERDA) {
                printf("Esquerda\n");
            } else if (direcao == CIMA) {
                printf("Cima\n");
            } else if (direcao == BAIXO) {
                printf("Baixo\n");
            }
        }
    }
    else {
        printf("Opção infavida!\n");
    }
    return 0;
}
