#include <stdio.h>
#include "somar.c"

int main() {
    int a;
    int b;
    int resultado;

    printf("Insira dois numeros para serem somados: ");
    scanf("%d %d", &a, &b);

    resultado = somar(a, b);

    printf("O resultado da soma de %d e %d eh %d\n", a, b, resultado);
    return 0;
}
