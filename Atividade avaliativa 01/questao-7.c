#include <stdio.h>

int main() {
    int n, i, termo_anterior = 0, termo_atual = 1, proximo_termo;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O termo de ordem zero da sequencia de Fibonacci eh: 0\n");
    } else if (n == 1) {
        printf("O primeiro termo da sequencia de Fibonacci eh: 1\n");
    } else {
        for (i = 2; i <= n; i++) {
            proximo_termo = termo_anterior + termo_atual;
            termo_anterior = termo_atual;
            termo_atual = proximo_termo;
        }
        printf("O %d-esimo termo da sequencia de Fibonacci eh: %d\n", n, termo_atual);
    }

    return 0;
}