#include <stdio.h>

int main() {
    int contador = 0;

    // Vamos repetir algo enquanto o contador for menor que 5
    while (contador < 5) {
        printf("Iteração %d\n", contador + 1);
        contador++;
    }

    return 0;
}
