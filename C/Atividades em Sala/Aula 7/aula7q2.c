#include <stdio.h>

/* 2 – Crie uma função que receba um inteiro e retorne 0 se ele é positivo ou 1 se ele for negativo; */

int valida(int x){
    if(x >= 0){
    return 0;
    }
    
    if (x < 0){
    return 1;
    }
}

int main()
{
    int n1;
    int resultado;

    
    printf("Insira um numero para ser retornado 1 se ele for negativo e 0 se ele for positivo: ");
    scanf("%d", &n1);

    resultado = valida(n1);

    printf("\n%d", resultado);

    char fechar[5];
    printf("\n\nDigite algo e enter para fechar");
    scanf("%s", &fechar);

    return 0;
}
