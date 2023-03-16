#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char respostas[5];
    int quantidade_sim = 0;

    printf("Responda as perguntas abaixo com s para sim e n para nao\n");
    printf("Telefonou para a vitima? ");
    scanf("%c", &respostas[0]);
    getchar();
    printf("Esteve no local do crime? ");
    scanf("%c", &respostas[1]);
    getchar();
    printf("Mora perto da vitima? ");
    scanf("%c", &respostas[2]);
    getchar();
    printf("Devia para a vitima? ");
    scanf("%c", &respostas[3]);
    getchar();
    printf("Ja trabalhou com a vitima? ");
    scanf("%c", &respostas[4]);
    getchar();

    for (int i = 0; i < 5; i++) {
        if (respostas[i] == 's') {
            quantidade_sim++;
        }
    }

    if (quantidade_sim == 2) {
        printf("\nSuspeita");
    } else if (quantidade_sim >= 3 && quantidade_sim <= 4) {
        printf("\nCumplice");
    } else if (quantidade_sim == 5) {
        printf("\nAssassino");
    } else {
        printf("\nInocente");
    }

    return 0;
}
