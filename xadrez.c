#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a direita
    // Utiliza estrutura de repeticao For
    int i;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal para cima e para a direita
    // Utiliza estrutura de repeticao While
    int j = 1;
    printf("Movimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    while(j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha - 8 casas para a esquerda
    // Utiliza estrutura de repeticao Do-While
    int k = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= 8);

    return 0;
}
