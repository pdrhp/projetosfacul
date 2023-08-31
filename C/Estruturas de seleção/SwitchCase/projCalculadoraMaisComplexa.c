#include <stdio.h>
#include <math.h>

int main() {
    int operacao;
    float num1, num2, resultado_float, porcentagem;
    double resultado_double;

    printf("Escolha uma operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Raiz Quadrada\n");
    printf("6 - Potenciacao\n");
    printf("7 - Porcentagem\n");
    scanf("%d", &operacao);

    printf("Digite dois numeros:\n");
    scanf("%f %f", &num1, &num2);

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
        case 7:
            porcentagem = (num1 / 100) * num2;
            printf("Resultado: %f\n", porcentagem);
            break;
        default:
            printf("Operacao invalida.\n");
            break;
    }

    return 0;
}
