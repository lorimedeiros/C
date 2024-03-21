#include <stdio.h>
#include "Pessoa.h"

void inicializarPessoa(struct Pessoa *pessoa, const char *nome, int idade) {
    strcpy(pessoa->nome, nome);
    pessoa->idade = idade;
}

void imprimirPessoa(const struct Pessoa *pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Idade: %d\n", pessoa->idade);
}