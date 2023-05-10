#include <stdio.h>
#include <stdlib.h>

/*Usando vetores, faça um programa que receba 10 números reais,
imprima qual é o maior e menor deles, com seus respectivos índices;*/

int main()
{
    int i;
    int numeros[10];

    printf("Insira 10 numeros: ");
    for(i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }

    int n_maior = numeros[0];
    int n_menor = numeros[0];
    int indice_maior = 0;
    int indice_menor = 0;

    for(i = 0; i < 10; i++){
        if(n_maior < numeros[i]){
            n_maior = numeros[i];
            indice_maior = i;
        }
        if(n_menor > numeros[i]){
            n_menor = numeros[i];
            indice_menor = i;
        }
    }

    printf("O maior numero: %d, com indice %d\nO menor numero: %d, com indice %d", n_maior, indice_maior+1, n_menor, indice_menor+1);


    return 0;
}
