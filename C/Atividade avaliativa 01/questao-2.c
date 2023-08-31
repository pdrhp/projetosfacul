#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	float x1, y1, x2, y2;
	float distancia;
	
	printf("Insira as coordenadas do plano 1: ");
	scanf("%f %f", &x1, &y1);
	printf("Insira as coordenadas do plano 2: ");
	scanf("%f %f", &x2, &y2);
	
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	printf("A distancia de p2 para p1 é: %.4f", distancia);
	
	
}
