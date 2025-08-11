#include <stdio.h>

int main() {
    int estoque = 0;
    int opcao, quantidade;

    while (1) {
        printf("\n=== Controle de Estoque ===\n");
        printf("1. Adicionar produtos ao estoque\n");
        printf("2. Remover produtos do estoque\n");
        printf("3. Consultar quantidade disponível\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Quantidade a adicionar: ");
                scanf("%d", &quantidade);
                if (quantidade > 0) {
                    estoque += quantidade;
                    printf("Produtos adicionados. Estoque atual: %d\n", estoque);
                } else {
                    printf("Quantidade invalida.\n");
                }
                break;

            case 2:
                printf("Quantidade a remover: ");
                scanf("%d", &quantidade);
                if (quantidade > 0 && quantidade <= estoque) {
                    estoque -= quantidade;
                    printf("Produtos removidos. Estoque atual: %d\n", estoque);
                } else {
                    printf("Remocao invalida. Verifique a quantidade.\n");
                }
                break;

            case 3:
                printf("Estoque atual: %d\n", estoque);
                break;

            case 4:
                printf("Saindo do sistema...\n");
                return 0;

            default:
                printf("Opcao invalida.\n");
        }
    }

    return 0;
}
