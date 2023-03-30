#include <stdio.h>

int main() {
  int matriz[3][3], y, x;
  int soma = 0;
  int produto = 1;

  printf("Insira os 9 numeros da matriz 3x3: ");
  for(y = 0; y < 3 ; y++)
    for(x = 0; x < 3; x++)
    {
      scanf("%d", &matriz[y][x]);

      if(y<x){
        soma += matriz[y][x];
      }
      if(y>x){
        produto *= matriz[y][x];
      }
    }

  printf("\nMatriz 3x3: \n");
  for(y = 0; y < 3; y++){
    for(x = 0; x < 3; x++){
      printf("%d ", matriz[y][x]);
    }
    printf("\n");
  }

  printf("\nA Soma dos items acima da diagonal principal e: %d\n", soma);
  printf("O produto dos items abaixo da diagonal principal e: %d\n", produto);
  
  return 0;
}