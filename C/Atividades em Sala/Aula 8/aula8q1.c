#include <stdio.h>
#include <stdlib.h>



/* faça um programa que receba do usuario um vetor de 10 posiçoes de numeros inteiros e retorne quais desses numeros são impares */


int main() {
	
	int vetor[10];
	int i;
	
	
	printf("Insira 10 numeros: ");
	for(i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(vetor[i] % 2 != 0){
			printf("Numero impar: %d\n", vetor[i]);
		}
	}	
	
	
	return 0;
}
