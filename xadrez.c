#include <stdio.h>

int main() {
    // Movimentação da Torre - 5 casas para a direita
    // Utiliza estrutura de repetição: for
    //Explicação do Código

//Torre:
//Movimento: 5 casas para a direita.
//Estrutura usada: for
//A cada iteração, imprime "Direita".

    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }
    return 0;
}