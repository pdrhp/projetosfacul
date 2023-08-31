#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;
    float pi=3.14;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &n1);

    printf("O perimetro da circunferencia e %f \ne a area e %f", 2*pi*n1, pi*(n1*n1));
}
