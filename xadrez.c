#include <stdio.h>

int main() {
    printf("*** Movimentos do Xadrez ***\n");

    // Bispo: 5 movimentos na diagonal (FOR)
    printf("\nBispo (diagonal superior direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Diagonal\n");
    }

    // Torre: 5 movimentos para a direita (WHILE)
    printf("\nTorre (para a direita):\n");
    int contador = 0;
    while (contador < 5) {
        printf("Direita\n");
        contador++;
    }

    // Rainha: 8 movimentos para a esquerda (DO-WHILE)
    printf("\nRainha (para a esquerda):\n");
    contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < 8);

    return 0;
}