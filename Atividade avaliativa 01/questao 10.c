#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    float media = soma / 10.0;
    printf("A media dos números lidos é: %.2f", media);

    return 0;
}
