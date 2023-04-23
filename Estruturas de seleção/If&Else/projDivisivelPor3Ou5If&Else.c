#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
	int n1;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	if(n1 % 3 == 0 && n1 % 5 == 0){
		printf("O numero e divisivel por 3 e por 5. \nResultados: \n%d dividido por 3 = %d \n%d dividido por 5 = %d", n1, n1/3, n1, n1/5);
	}
	else if(n1 % 3 == 0 && n1 % 5 >= 0){
		printf("O numero e divisivel somente por 3. \nResultado: \n%d dividido por 3 = %d", n1, n1/3);
	}
	else if(n1 % 3 >= 0 && n1 % 5 == 0){
		printf("O numero e divisivel somente por 5. \nResultado: \n%d dividido por 5 = %d", n1, n1/5);
	}
	else{
		printf("O numero nao e divisivel nem por 3 nem por 5");
	}
	
	
	
	
}
