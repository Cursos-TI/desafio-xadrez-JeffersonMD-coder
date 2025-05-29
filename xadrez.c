#include <stdio.h>

int main() {
    // Movimento da TORRE: 5 casas para a direita
    // Utiliza estrutura de repetição FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do BISPO: 5 casas na diagonal para cima e à direita
    // Utiliza estrutura de repetição WHILE
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da RAINHA: 8 casas para a esquerda
    // Utiliza estrutura de repetição DO-WHILE
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
