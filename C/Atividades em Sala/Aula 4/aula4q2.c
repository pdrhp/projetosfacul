#include <stdio.h>
#include <stdlib.h>

/*Usando matrizes, faça um programa que receba 9 números inteiros
em uma matriz 3x3 em ordem crescente dos seus índices. Calcule e
imprima a soma dos elementos acima da diagonal principal e o produto
dos elementos abaixo da diagonal principal.*/

int main()
{
    int matriz[3][3];
    int y, x;

    printf("Insira os 9 numeros da matriz: ");
    for(y = 0; y < 3; y++){
        for(x = 0; x < 3; x++){
            scanf("%d", &matriz[y][x]);
        }
    }


    printf("Matriz 3x3: \n");
    for (y = 0; y < 3; y++){
        for ( x = 0; x < 3; x++){
            printf(" %d ", matriz[y][x]);
        }
        printf("\n");
    }

    int soma = 0;
    int produto = 1;

    for(y = 0; y < 3; y++){
        for(x = 0; x < 3; x++){
            if(x>y){
                soma += matriz[y][x];
            }
            if (y>x)
            {
                produto *= matriz[y][x];
            }
            
        }
    }
    
    printf("A soma dos items acima da diagonal principal? %d, o produto dos items abaixo da linha diagonal: %d", soma, produto);

    char fechar[5];
    printf("\n\nDigite algo e enter para fechar");
    scanf("%s", &fechar);

    return 0;
}
