#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[40];
    int matricula;
    int idade;
};

int main()
{
    struct Aluno aluno[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Insira o nome do aluno %d: ", i+1);
        fgets(aluno[i].nome, 20, stdin); 
    }
    
    for(i = 0; i < 5; i++){
        printf("Insira a matricula do aluno %d: ", i+1);
        scanf("%d", &aluno[i].matricula); 
    }   

    for(i = 0; i < 5; i++){
        printf("Insira a idade do aluno %d: ", i+1);
        scanf("%d", &aluno[i].idade); 
    }
    
    printf("=====================================\n");
    printf("Nome do aluno 1: %s", aluno[0].nome);
    printf("Matricula: %d\n", aluno[0].matricula);
    printf("Idade: %d\n", aluno[0].idade);
    printf("=====================================\n");
    printf("Nome do aluno 2: %s", aluno[1].nome);
    printf("Matricula: %d\n", aluno[1].matricula);
    printf("Idade: %d\n", aluno[1].idade);
    printf("=====================================\n");
    printf("Nome do aluno 3: %s", aluno[2].nome);
    printf("Matricula: %d\n", aluno[2].matricula);
    printf("Idade: %d\n", aluno[2].idade);
    printf("=====================================\n");
    printf("Nome do aluno 4: %s", aluno[3].nome);
    printf("Matricula: %d\n", aluno[3].matricula);
    printf("Idade: %d\n", aluno[3].idade);
    printf("=====================================\n");
    printf("Nome do aluno 5: %s", aluno[4].nome);
    printf("Matricula: %d\n", aluno[4].matricula);
    printf("Idade: %d\n", aluno[4].idade);
    printf("=====================================");
    
    return 0;
}
