#include <stdio.h>

/* 3 - Crie uma função que receba três inteiros como parâmetros
representando determinado horário (hora : minutos : segundos), e
retorne um inteiro representando este horário em segundos;*/ 

int conversao(int hora, int minuto, int segundo){
    int processo1;
    int processo2;

    processo1 = hora * 60;
    processo2 = (processo1 + minuto) * 60;
    segundo = segundo + processo2;

    return segundo;
}

int main()
{
    int horas;
    int minutos;
    int segundos;
    int rstdconversao;

    printf("Insira as horas, minutos e segundos que desejar para ser convertido tudo em segundos.\n");
    printf("Horas: ");
    scanf("%d", &horas);
    printf("Minutos: ");
    scanf("%d", &minutos);
    printf("Segundos: ");
    scanf("%d", &segundos);

    rstdconversao = conversao(horas, minutos, segundos);

    printf("A conversao em minutos de tudo: %d", rstdconversao);

    char fechar[5];
    printf("\n\nDigite algo e enter para fechar");
    scanf("%s", &fechar);

}
