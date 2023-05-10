#include <stdio.h>

/*1 – Crie uma função que receba um inteiro e retorne o seu quadrado;*/

int quad(int x){
    return x * x;
}


int main()
{
    int resultado;
    int n1;

    printf("Insira um numero inteiro e o programa retornara o seu quadrado: ");
    scanf("%d", &n1);

    resultado = quad(n1);

    printf("O resultado e %d", resultado);

    char fechar[5];
    printf("\n\nDigite algo e enter para fechar");
    scanf("%s", &fechar);
    
    return 0;
}
