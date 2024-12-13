#include <stdio.h>

/*
   Um método para cálculo de raízes quadradas de um número N já era conhecido
   pelos babilônios em...bom, há muito tempo. (Este método é também conhecido
   como método de Heron, um matemático grego que o descreveu 20 séculos depois 
   dos babilônios, perto do ano 50 DC).

   Começando de um valor inicial k (geralmente valendo um), os babilônios 
   geravam um novo valor de k de acordo com a regra:
      k = (k + (N / k)) / 2

   A medida que o processo é repetido, os novos valores de k se aproximam cada 
   vez mais da raiz de N. Escreva um programa que leia o valor de N e imprima os
   primeiros 12 valores desta formula, testando-os para ver se eles realmente
   se aproximam.
*/

void raizBabilonica(int N);

int main() {
  int N;

  // lê o valor de N
  printf("Digite o valor de N para calcular a raiz quadrada: ");
  scanf("%d", &N);
  raizBabilonica(N);

  return 0;
}

void raizBabilonica(int N) {
  // valor inicial de k (geralmente 1)
  float k = 1.0;

  // imprimindo os 12 primeiros valores
  for (int i = 1; i <= 12; i++) {
    k = (k + N / k) / 2; // calcula o novo valor de k
    printf("Valor de k após %d iteração(s): %.3f\n", i, k);
  }
}
