#include <stdio.h>

int main(void) {
  int n = 0;
  int i;

  printf("A soma dos numeros naturais abaixo de 1000 que sao divisiveis por 3 e por 5: ");

  for(i=1;i<=1000;i++){
    if(i % 3 == 0 || i % 5 == 0){
      n += i;
    }
  }

  printf("%d", n);

  
  return 0;
}