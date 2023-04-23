#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    while (num >= 0) {
        printf("Digite outro numero inteiro (ou negativo para sair): ");
        scanf("%d", &num);

        if (num >= 0) {
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }

    printf("O maior numero lido foi %d\n", maior);
    printf("O menor numero lido foi %d\n", menor);

    return 0;
}
