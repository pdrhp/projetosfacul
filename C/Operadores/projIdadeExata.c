#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct questao4ras
{
    int dia, mes, ano;
}Data;


int main()
{
    printf("Insira as informaçoes");
    printf("\nInsira o dia do nascimento: ");
    scanf("%d", &Data.dia);
    printf("Insira o mês do nascimento: ");
    scanf("%d", &Data.mes);
    printf("Insira o ano do nascimento: ");
    scanf("%d", &Data.ano);

    int diaAtual=9;
    int mesAtual=3;
    int anoAtual=2023;

    int totalidade = 365 * anoAtual + 30 * mesAtual + diaAtual - 365 * Data.ano - 30 * Data.mes - Data.dia;

    int anos = totalidade / 365;
    totalidade = totalidade % 365;

    int meses = totalidade / 30;
    totalidade = totalidade % 30;

    int dias = totalidade;

    printf("\nVoce tem %d anos, %d meses, %d dias de idade", anos, meses, dias);

}