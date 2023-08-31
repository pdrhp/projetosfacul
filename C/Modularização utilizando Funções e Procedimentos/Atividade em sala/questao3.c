#include <stdio.h>
#include <stdlib.h>

int conversao(int hora, int minuto, int segundo){
	int convertido;
	int processo;
	int processo2;
	
	processo = hora * 60;
	minuto += processo;
	processo2 = minuto * 60;
	convertido = processo2 + segundo;
	
	return convertido;
	
}

int main() {
	int horas, minutos, segundos;
	int resultado;
	
	printf("Insira horas, minutos e segundos para serem convertidos em segundos");
	printf("\nHoras: ");
	scanf("%d", &horas);
	printf("\nMinutos: ");
	scanf("%d", &minutos);
	printf("\nSegundos: ");
	scanf("%d", &segundos);
	
	resultado = conversao(horas, minutos, segundos);
	
	printf("Resultado: %d", resultado);
	
	return 0;
}
