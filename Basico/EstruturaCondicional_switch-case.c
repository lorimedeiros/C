#include <stdio.h>

int main() {
    int opcao = 2;

    switch (opcao) {
        case 1:
            printf("Opção 1 selecionada.\n");
            break;
        case 2:
            printf("Opção 2 selecionada.\n");
            break;
        case 3:
            printf("Opção 3 selecionada.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
//O break é importante em cada case para sair do bloco. Se o break for omitido, a execução continuará nos case subsequentes até encontrar um break ou até o final do bloco 
//O default é opcional e é executado quando nenhum dos case corresponde ao valor da expressão.
