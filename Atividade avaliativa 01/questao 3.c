#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	float raio;
	float area;
	float volume;
	
	printf("Insira o raio da circuferencia: ");
	scanf("%f", &raio);
	
	area = 4 * 3.14159 * pow(raio, 2);
	volume = (4.0/3) * 3.14159 * pow(raio, 3);
	
	printf("O raio da esfera e: %f", raio);
	printf("\nA area da superficie da esfera e: %f", area);
	printf("\nO volume da esfera e: %f", volume);
	
	return 0;
}
