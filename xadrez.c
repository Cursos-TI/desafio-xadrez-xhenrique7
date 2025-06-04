#include <stdio.h>

// ----------------------
// Função recursiva para o movimento da Torre (5 casas à direita)
// ----------------------
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// ----------------------
// Função recursiva para o movimento da Rainha (8 casas à esquerda)
// ----------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ----------------------
// Função recursiva para o movimento do Bispo (5 casas na diagonal)
// ----------------------
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// ----------------------
// Movimento do Bispo com loops aninhados: externo (vertical), interno (horizontal)
// ----------------------
void moverBispoComLoops(int casas) {
    printf("\nMovimento do Bispo (com loops aninhados):\n");
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) { // apenas uma vez por iteração
            printf("Cima Direita\n");
        }
    }
}

// ----------------------
// Movimento do Cavalo com loops aninhados e controle complexo
// Move-se em L: 2 casas para cima e 1 para direita
// ----------------------
void moverCavalo() {
    int casasVerticais = 2;
    int casasHorizontais = 1;
    int mov = 1; // contador de movimentos "L"

    printf("\nMovimento do Cavalo (Cima Cima Direita):\n");

    for (int m = 0; m < mov; m++) {
        int i = 0;
        while (i < casasVerticais + casasHorizontais) {
            if (i == 0 || i == 1) {
                printf("Cima\n");
            } else if (i == 2) {
                printf("Direita\n");
            } else {
                break;
            }
            i++;
        }
    }
}

// ----------------------
// Função principal
// ----------------------
int main() {
    // Movimento da Torre (Recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo (Recursivo)
    printf("\nMovimento do Bispo (com recursao):\n");
    moverBispoRecursivo(5);

    // Movimento da Rainha (Recursivo)
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Bispo (com loops aninhados)
    moverBispoComLoops(5);

    // Movimento do Cavalo com loops aninhados e controle complexo
    moverCavalo();

    return 0;
}
