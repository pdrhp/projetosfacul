#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome e: %s\n", nome);
    
    // Obtém o tamanho da string
    int tamanho = strlen(nome);
    printf("O tamanho do seu nome e: %d\n", tamanho);
    
    // Copia a string para outra variável
    char copia[20];
    strcpy(copia, nome);
    printf("Copia do seu nome: %s\n", copia);
    
    // Concatenação de strings
    char sobrenome[20];
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    
    strcat(nome, " ");
    strcat(nome, sobrenome);
    printf("Seu nome completo e: %s\n", nome);
    
    return 0;
}
