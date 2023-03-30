#include <stdio.h>

int main() {
    int matriz[3][3], i, j;
    int soma = 0, produto = 1;

    printf("Digite os 9 números inteiros em ordem crescente dos índices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            if (j > i) {
                soma += matriz[i][j];
            }
            if (j < i) {
                produto *= matriz[i][j];
            }
        }
    }

    printf("\nMatriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos acima da diagonal principal: %d\n", soma);
    printf("Produto dos elementos abaixo da diagonal principal: %d\n", produto);

    return 0;
}
