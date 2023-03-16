#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;

    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("O antecessor do numero e %d e o sucessor e %d", n1-1, n1+1);
}