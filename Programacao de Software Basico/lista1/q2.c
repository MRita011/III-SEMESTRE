#include <stdio.h>

/*
  Escreva uma funçao que faz a conversao de
  temperaturas de Fahrenheit para Celsius, segundo a formula conhecida:
  C = 5/9 ∗ (F − 32).

  Depois de pronta, faca um programa para descobrir
  em que temperatura as duas escalas coincidem.

  Se voce escrever a formula de conversao (na maioria das linguagens de
  programacao) exatamente como ela foi dada acima, o resultado da conversao
  sera sempre zero. Explique o motivo e corrija.
*/

float conversao(float f) {
  float c = 5.0 / 9.0 * (f - 32.0);
  printf("Conversão: %.2f°F = %.2f°C\n", f, c);
  return c;
}

void coincidencia() {
  float f = -40.0;
  printf("As escalas Fahrenheit e Celsius coincidem em %.2f°C e %.2f°F\n", f,
         f);
}

int main() {
  float f = 58.0;
  conversao(f);
  coincidencia();

  return 0;
}

/*
  Na fórmula (C = 5/9 * (F - 32)), o resultado é zero na maioria das
  linguagens porque a divisão 5/9 é feita entre dois inteiros.

  Uma divisão inteira entre dois números inteiros resulta em outro inteiro,
  e como 5/9 é menor que 1, o resultado será truncado para zero.

  Isso zera a conversão antes de fazer a multiplicação com (F - 32).

  A solução para evitar o arredondamento é utilizar uma divisão real
  com 5.0 e 9.0!
*/