#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que receba dois
números inteiros. Considere estes dois
números como os limites de um intervalo de
números inteiros. Calcule a soma dos números
pares deste intervalo e o produto dos números
ímpares deste intervalo.*/

int main()
{
    int comeco;
    int final;

    printf("Insira o começo e o final do intervalo: ");
    scanf("%d %d", &comeco, &final);


    int soma = 0;
    int produto = 1;

    for (int i = comeco; i <= final; i++){
        if(i%2==0){
            soma += i;
        }
        if(i%2 != 0){
            produto *= i;
        }
    }
    
    printf("A soma dos numeros pares deste intervalo: %d, o produto dos numeros impares deste intervalo: %d", soma, produto);


    return 0;
}
