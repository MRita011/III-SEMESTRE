#include <stdio.h>

/*
    Escreva uma funçao que faz a conversao de temperaturas de Fahrenheit para Celsius,
    segundo a formula conhecida: C = 5/9 ∗ (F − 32).
    Depois de pronta, faca um programa para descobrir em que temperatura as duas
    escalas coincidem.
    Se voce escrever a formula de conversao (na maioria das linguagens de programacao)
    exatamente como ela foi dada acima, o resultado da conversao sera sempre zero. Explique o motivo e corrija.
*/

// protótipos
float fahrenheit_celsius(float f);
float celsius_fahrenheit(float c);
void coincidencia(float f, float c);

// fahrenheit para celsius
float fahrenheit_celsius(float f) {
  return 5.0/9.0 * (f - 32.0);
}

// celsius para fahrenheit
float celsius_fahrenheit(float c) {
  return (9.0 / 5.0 * c) + 32.0;
}

// fahrenheit coincide com celsius?
void coincidencia(float f, float c) {
  // faz a conversão e compara com o valor em celsius
  if (fahrenheit_celsius(f) == c) {
    printf("As temperaturas %.2f°F e %.2f°C coincidem!\n", f, c);
  }

  // agora converte e compara com fahrenheit
  else if (celsius_fahrenheit(c) == f) {
    printf("As temperaturas %.2f°F e %.2f°C coincidem.\n", f, c);
  }

  // caso contrario, mostra que não coincidem
  else {
    printf("As temperaturas %.2f°F e %.2f°C não coincidem.\n", f, c);
  }
}

int main() {
  float f, c;

  printf("Digite uma temperatura em Fahrenheit: ");
  scanf("%f", &f);

  printf("Digite uma temperatura em Celsius: ");
  scanf("%f", &c);

  coincidencia(f, c);

  return 0;
}
