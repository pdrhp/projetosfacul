#include <stdio.h>
#include <stdlib.h>

/*1 – Escreva um algoritmo que receba um vetor de 7 posições, imprima o
maior e o menor dos valores;*/

int main()
{
    int matriz[4][4];
    int y;
    int x;


    printf("Insira os numeros matriz 4x4: ");
    for (y = 0; y < 4; y++)
    {
        for(x = 0; x < 4; x++){
            scanf("%d", &matriz[y][x]);
        }
        
    }
    
    printf("Matriz 4x4: \n");
    for (y = 0; y < 4; y++)
    {
        for(x = 0; x < 4; x++){
        printf(" %d ", matriz[y][x]);
        }
        printf("\n");
    }

    int soma = 0;

    for (y = 0; y < 4; y++){
        for(x = 0; x < 4; x++){
            if(y==x){
                soma += matriz[y][x];
            }
        }
    }

    printf("A soma dos termos na matriz diagonal: %d", soma);

    char fechar[5];
    printf("\n\nDigite algo e enter para fechar");
    scanf("%s", &fechar);

    return 0;
}
