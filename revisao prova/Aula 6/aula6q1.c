#include <stdio.h>
#include <stdlib.h>

/*1-Escreva um algoritmo que receba um vetor de 7 posições, imprima o
maior e o menor dos valores;*/

int main()
{
    int i;
    int numeros[7];


    for(i = 0; i < 7; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    int n_maior = numeros[0];
    int n_menor = numeros[0];
    int indice_maior = 0;
    int indice_menor = 0;

    for(i = 0; i < 7; i++){
        if(n_menor>numeros[i]){
            n_menor = numeros[i];
            indice_menor = i;
        }
        if(n_maior<numeros[i]){
            n_maior = numeros[i];
            indice_maior = i;
        }
    }

    printf("O maior numero: %d, indice %d\n O menor numero: %d, indice %d: ", n_maior, indice_maior+1, n_menor, indice_menor+1);

    char fechar[5];
    printf("\n\nDigite algo e enter para fechar");
    scanf("%s", &fechar);

    return 0;
}
