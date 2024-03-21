#include <stdio.h>

int main() {
    // Defina o tamanho máximo da lista
    const int tamanhoLista = 5;

    // Crie um array para armazenar a lista
    int lista[tamanhoLista];

    // Adicione elementos à lista
    lista[0] = 10;
    lista[1] = 20;
    lista[2] = 30;
    lista[3] = 40;
    lista[4] = 50;

    // Acesse e imprima os elementos da lista
    for (int i = 0; i < tamanhoLista; i++) {
        printf("Elemento %d: %d\n", i + 1, lista[i]);
    }

    return 0;
}
