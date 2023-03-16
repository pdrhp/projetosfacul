#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() 
{
	int n1;
	
	printf("Digite um numero de 1 a 7: ");
	scanf("%d", &n1);
	
	switch(n1){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda");
			break;	
		case 3:
			printf("Terça Feira");
			break;
		case 4:
			printf("Quarta");
			break;
		case 5:
			printf("Quinta Feira");
			break;
		case 6:
			printf("Sexta");
			break;
		case 7:
			printf("Sabado");
			break;
        default:
            printf("\n\nNumero invalido");
      }					
	
	
}
