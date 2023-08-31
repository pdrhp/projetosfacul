#include <stdio.h>
#include <stdlib.h>



int quadrado(int n){
	return n*n;
}

int main() {
	int n1;
	int resultado;
	
	printf("Insira um numero para saber o quadrado dele: ");
	scanf("%d", &n1);
	
	resultado = quadrado(n1);
	
	
	printf("\nO resultado do quadrado de %d: %d", n1, resultado);
	
	
	return 0;
}
