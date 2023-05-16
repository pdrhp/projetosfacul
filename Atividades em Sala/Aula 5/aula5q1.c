#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[5];
    int i;

    printf("Insira 5 numeros inteiros para fazer sua media aritmetica: ");
    for(i=0;i<5;i++){
        scanf("%d", &n[i]);
    }

    int media = (n[0] + n[1] + n[2] + n[3] + n[4]) / 5;

    printf("A Media: %d", media);    

    char fechar[5];
    printf("\n\nDigite algo e enter para fechar");
    scanf("%s", &fechar);

    return 0;
}
