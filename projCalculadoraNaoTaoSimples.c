#include <stdio.h>
#include <math.h>

int main() {
    int operacao;
    float num1, num2, resultado_float;
    double resultado_double;
    
    // Pedindo a operação desejada
    printf("Escolha uma operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Raiz Quadrada\n");
    printf("6 - Potenciacao\n");
    scanf("%d", &operacao);
    
    // Pedindo os números para realizar a operação
    printf("Digite dois numeros:\n");
    scanf("%f %f", &num1, &num2);
    
    // Realizando a operação escolhida
    switch (operacao) {
        case 1:
            resultado_float = num1 + num2;
            printf("Resultado: %f\n", resultado_float);
            break;
        case 2:
            resultado_float = num1 - num2;
            printf("Resultado: %f\n", resultado_float);
            break;
        case 3:
            resultado_float = num1 * num2;
            printf("Resultado: %f\n", resultado_float);
            break;
        case 4:
            if (num2 == 0) {
                printf("Nao e possivel dividir por zero.\n");
            } else {
                resultado_float = num1 / num2;
                printf("Resultado: %f\n", resultado_float);
            }
            break;
        case 5:
            resultado_float = sqrt(num1);
            printf("Resultado: %f\n", resultado_float);
            break;
        case 6:
            resultado_double = pow(num1, num2);
            printf("Resultado: %lf\n", resultado_double);
            break;
        default:
            printf("Operacao invalida.\n");
            break;
    }
    
    return 0;
}