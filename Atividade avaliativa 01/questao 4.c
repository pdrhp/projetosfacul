#include <stdio.h>
#include <stdlib.h>



int main() {
	
	float x, y;
	
	printf("Insira as coordenadas do plano: ");
	scanf("%f %f", &x, &y);
	
	if(x>1 && y>1){
		printf("Quadrante Q1");
	}
	if(x<0 && y>1){
		printf("Quadrante Q2");
	}
	if(x<0 && y<0){
		printf("Quadrante Q3");
	}
	if(x>1 && y<0){
		printf("Quadrante Q4");
	}
	if(x==0 && y==0){
		printf("Origem");
	}
	if(x==0 && y!=0){
		printf("Eixo Y");
	}
	if(x!=0 && y==0){
		printf("Eixo X");
	}
}
