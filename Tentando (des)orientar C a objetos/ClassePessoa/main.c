#include <stdio.h>
#include "Pessoa.h"

int main() {
    // Criando uma instância da "classe"
    struct Pessoa pessoa1;
    inicializarPessoa(&pessoa1, "Joao", 25);

    // Imprimindo os dados da instância
    imprimirPessoa(&pessoa1);

    return 0;
}