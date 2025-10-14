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

    printf("\n");

// Movimentação do Bispo - 5 casas na diagonal (cima + direita)
// Utiliza estrutura de repetição: while

//Explicação do Código
// Bispo:
//Movimento: 5 casas na diagonal (subindo e para a direita).
//Estrutura usada: while
//A cada iteração, imprime "Cima Direita".

    int movimentoBispo = 5;
    int contadorBispo = 0;
    printf("Movimento do Bispo:\n");
    while (contadorBispo < movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

// Movimentação da Rainha - 8 casas para a esquerda
// Utiliza estrutura de repetição: do-while

//Explicação do Código
//Rainha:
//Movimento: 8 casas para a esquerda.
//Estrutura usada: do-while
//A cada iteração, imprime "Esquerda".

    int movimentoRainha = 8;
    int contadorRainha = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentoRainha);

    return 0;
}