#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i;
	float numeros[10];
	
	for(i = 0; i < 10; i++){
		printf("Digite o numero %d: ", i);
		scanf("%f", &numeros[i]);
	}
	
	int n_menor = numeros[0];
	int n_maior = numeros[0];
	int indice_menor = 0;
	int indice_maior = 0;
	
	for(i = 0; i < 10; i++){
		if(n_menor>numeros[i]){
			indice_menor = i;
			n_menor = numeros[i];
		}
	}
	
	for(i = 0; i < 10; i++){
		if(n_maior<numeros[i]){
			indice_maior = i;
			n_maior = numeros[i];
		}
	}
	
	printf("O numero maior e %d com indice %d\n", n_maior, indice_maior );
	printf("O numero menor e %d com indice %d\n", n_menor, indice_menor );

}
