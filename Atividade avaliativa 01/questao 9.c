#include <stdio.h>

int main() {
    int opcao, quantidade;
    float preco, total = 0.0;
    char continuar = 's';
    
    while (continuar == 's' || continuar == 'S') {
        printf("Selecione a fruta que deseja comprar:\n");
        printf("1 => ABACAXI - 5,00 a unidade\n");
        printf("2 => MAÇA - 1,00 a unidade\n");
        printf("3 => PERA - 4,00 a unidade\n");
        printf("Opçao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                preco = 5.0;
                printf("Voce selecionou ABACAXI.\n");
                break;
            case 2:
                preco = 1.0;
                printf("Voce selecionou MAÇA.\n");
                break;
            case 3:
                preco = 4.0;
                printf("Voce selecionou PERA.\n");
                break;
            default:
                printf("Opção invalida.\n");
                continue;
        }
        
        printf("Quantidade desejada: ");
        scanf("%d", &quantidade);
        
        total += preco * quantidade;
        
        printf("Deseja continuar comprando? (S/N) ");
        scanf(" %c", &continuar);
    }
    
    printf("Valor total da compra: R$ %.2f\n", total);
    
    return 0;
}
