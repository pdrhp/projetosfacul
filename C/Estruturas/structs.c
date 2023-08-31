#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Endereco {
    char rua[50];
    int numero;
};

struct Pessoa 
{
    char nome[50];
    int idade;
    float altura;
    struct Endereco endereco;
};

int main()
{
    struct Pessoa pessoa1;

    strcpy(pessoa1.nome, "Carlos");
    pessoa1.idade = 18;
    pessoa1.altura = 1.8;

    printf("O nome da pessoa 1 e %s, a idade e %d e a altura e %0.2f\n", pessoa1.nome, pessoa1.idade, pessoa1.altura);

    struct Pessoa pessoa2 = {"Roberto", 25, 1.67 };

    printf("\nO nome da pessoa 2 e %s, a idade e %d e a altura e %0.2f\n", pessoa2.nome, pessoa2.idade, pessoa2.altura);

    struct Pessoa pessoa3;

    strcpy(pessoa3.nome, "Julio");
    pessoa3.idade = 13;
    pessoa3.altura = 1.69;
    strcpy(pessoa3.endereco.rua, "Rua Augusta");
    pessoa3.endereco.numero = 1;

    printf("\nO nome da pessoa 3 e %s, a idade e %d e a altura e %0.2f, ele mora na %s %d\n", pessoa3.nome, pessoa3.idade, pessoa3.altura, pessoa3.endereco.rua, pessoa3.endereco.numero);

    struct Pessoa pessoa4 = {"Elena", 19, 1.72, {"Rua Edeia", 10}};

    printf("\nO nome da pessoa 4 e %s, a idade e %d e a altura e %0.2f, ela mora na %s %d\n", pessoa4.nome, pessoa4.idade, pessoa4.altura, pessoa4.endereco.rua, pessoa4.endereco.numero);


}