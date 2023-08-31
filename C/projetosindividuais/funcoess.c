#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float soma(float x, float y){
    return x+y;
}

float multiplicacao(float x, float y){
    return x*y;
}

float divisao(float x, float y){
    if(x>y)
        return x/y;

    if(y>x)
        return y/x;
}

float subtracao(float x, float y){
    return x - y;
}

int main(){

    char continuar = 's';
    float num1, num2;
    int operacao;
    float resultado;

    while (continuar == 's' || continuar == 'S')
    {
        printf("Insira dois numeros para serem calculados com uma operacao de sua escolha: \n");
        printf("Primeiro numero: \n");
        scanf("%f", &num1);
        printf("Segundo numero: \n");
        scanf("%f", &num2);

        printf("Escolha uma operaçao de acordo com o numero: \n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        scanf("%d", &operacao);
        
        switch (operacao)
        {
        case 1:
            resultado = soma(num1, num2);
            printf("\nResultado: %.2f",resultado);
            break;

        case 2:
            resultado = subtracao(num1, num2);
            printf("\nResultado: %.2f", resultado);
            break;
        case 3:
            resultado = multiplicacao(num1, num2);
            printf("\nResultado: %.2f", resultado);
            break;
        case 4:
            resultado = divisao(num1, num2);
            printf("\nResultado: %.2f", resultado);
            break;
        default:
            printf("\nOperação invalida");
            break;
        }   

        printf("\nDeseja fazer outro calculo? (S/N) \n");
        scanf(" %c", &continuar);
    }

    printf("Obrigado por utilizar nossa calculadora!");

}