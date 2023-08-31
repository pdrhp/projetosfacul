#include <stdio.h>
#include <stdlib.h>


int testepositivo(int n){
	if(n >= 0){
		return 0;
	}
	else{
		return 1;
	}
}

int main() {
	int n1;
	int resultado;
	
	printf("Insira um numero para testar se e negativo ou positivo, se for positivo a saida sera 0, se for negativo a saida sera 1: ");
	scanf("%d", &n1);
	
	resultado = testepositivo(n1);
	
	printf("Saida: %d", resultado);
	return 0;
}
