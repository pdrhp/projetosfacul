#include <stdio.h>
#include <stdlib.h>



/* faça um programa que receba do usuario um vetor de 10 posiçoes de numeros inteiros e retorne quais desses numeros são impares */


int main() {
	
	int vetor[5];
	int i;
	
	
	printf("Insira 5 numeros: ");
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	
	printf("Ordem inversa\n");
	for(i = 4; i >= 0; i--){
			printf("%d \n", vetor[i]);
		}

	return 0;
}


