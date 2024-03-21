#ifndef PESSOA_H
#define PESSOA_H

struct Pessoa {
    char nome[50];
    int idade;
};

void inicializarPessoa(struct Pessoa *pessoa, const char *nome, int idade);
void imprimirPessoa(const struct Pessoa *pessoa);

#endif