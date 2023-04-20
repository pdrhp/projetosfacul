#include <stdio.h>
#include <stdlib.h>



int main() {
	int n;
	int i;
	
	printf("Insira um numero para saber seus divisores: ");
	scanf("%d", &n);
	
	printf("Os Divisores de %d sao: ", n);
	for(i=1; i<=n; i++){
		if(n % i == 0){
			printf("\n%d", i);
		}
	}
	
	
	return 0;
}
