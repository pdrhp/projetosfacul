#include <stdio.h>
#include <string.h>

int dobrar(int n){
    return n*n;
}

int main() {
   int resultado;
   int n1;

   printf("Insira um numero para ser dobrado: ");
   scanf("%d", &n1);

   resultado = dobrar(n1);

   printf("O dobro de %d e %d", n1, resultado);

}
