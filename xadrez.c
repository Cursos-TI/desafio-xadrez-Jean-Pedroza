#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a direita
    // Utiliza estrutura de repeticao: for
    int i;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for(i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal para cima e para a direita
    // Utiliza estrutura de repeticao: while
    int j = 1;
    printf("Movimento do Bispo (5 casas na Diagonal para Cima e Direita):\n");
    while(j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha - 8 casas para a esquerda
    // Utiliza estrutura de repeticao: do-while
    int k = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= 8);

    printf("\n");

    // Movimento do Cavalo - 2 casas para baixo e 1 para a esquerda
    // Utiliza estrutura de repeticao: for (externo) + while (interno)
    printf("Movimento do Cavalo (2 casas para Baixo e 1 para a Esquerda):\n");

    for (int passo = 1; passo <= 1; passo++) {
        
        int casas = 0;
        // Duas casas para baixo
        while (casas < 2) {
            printf("Baixo\n");
            casas++;
        }

        // Uma casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}
