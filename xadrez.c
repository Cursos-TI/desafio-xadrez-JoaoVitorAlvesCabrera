#include <stdio.h>

// Função recursiva para o movimento da Torre (Direita)
void moverTorre(int movimentosRestantes) {
if (movimentosRestantes == 0) return;
printf("Direita\n");
moverTorre(movimentosRestantes - 1);
}

// Função recursiva para o movimento da Rainha (Esquerda)
void moverRainha(int movimentosRestantes) {
 if (movimentosRestantes == 0) return;
printf("Esquerda\n");
moverRainha(movimentosRestantes - 1);
}

// Função recursiva + loops aninhados para o movimento do Bispo (Diagonal: Cima Direita)
void moverBispo(int movimentosVerticais, int movimentosHorizontais) {
if (movimentosVerticais == 0) return;

// Movimento vertical (Cima)
printf("Cima\n");

// Movimento horizontal (Direita) dentro do loop vertical
for (int j = 0; j < movimentosHorizontais; j++) {
printf("Direita\n");
}

moverBispo(movimentosVerticais - 1, movimentosHorizontais); // chamada recursiva
}

int main() {
// ---------------- TORRE ----------------
int movimentoTorre = 5;
printf("Movimento da Torre:\n");
moverTorre(movimentoTorre);
printf("\n");

// ---------------- BISPO ----------------
int movimentoVerticalBispo = 5;  // 5 movimentos na diagonal
int movimentoHorizontalBispo = 1; // 1 passo horizontal por cada vertical
printf("Movimento do Bispo:\n");
moverBispo(movimentoVerticalBispo, movimentoHorizontalBispo);
printf("\n");

// ---------------- RAINHA ----------------
int movimentoRainha = 8;
printf("Movimento da Rainha:\n");
moverRainha(movimentoRainha);
printf("\n");

// ---------------- CAVALO ----------------
//Cavalo se move em "L": 2 casas para cima, 1 casa para direita.
//Utilizaremos dois loops aninhados para simular múltiplos movimentos,
//com uso de break e continue.

int movimentosCavalo = 3; // Número de movimentos em "L"

printf("Movimento do Cavalo:\n");

for (int i = 0; i < movimentosCavalo; i++) {
// Simulando 2 movimentos para cima
for (int j = 0; j < 2; j++) {
if (j == 1 && i == 2) {
// Exemplo de uso de continue: pular um movimento específico
continue;
}
     printf("Cima\n");
}

// Movimento para direita
for (int k = 0; k < 1; k++) {
if (i == 1) {
 // Exemplo de uso de break: interrompe o movimento no 2º "L"
break;
}
  printf("Direita\n");
}
}

    return 0;
}