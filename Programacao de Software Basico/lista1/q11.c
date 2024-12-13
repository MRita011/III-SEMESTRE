#include <math.h>
#include <stdio.h>

/*
  Escreva uma função que calcula o valor (aproximado) de cos(x), dado
  pela aproximação abaixo:
  cos(x) ≈ 1 − x² / 2! + x⁴ / 4! − x⁶ / 6! + ...

  Faça a soma com três termos, e escreva um programa que recebe valores de x
  e calcula seu cosseno, calculando também a função cosseno disponível em C
  e apresentando a diferença entre os resultados obtidos. Se você achar o erro
  grande demais, recalcule com mais termos e compare outra vez. Use novamente
  a função fatorial já criada.
*/

int fatorial(int n);

int fatorial(int n) {
  int resultado = 1;

  for (int i = 1; i <= n; i++)
    resultado *= i;

  return resultado;
}

double cosAproximado(double x) {
  // começa com o primeiro termo da série (1)
  double soma = 1.0;

  // soma 3 termos da série de Taylor:
  // cos(x) ≈ 1 − (x² / 2!) + (x⁴ / 4!) − (x⁶/ 6!)

  soma -= (x * x) / fatorial(2);                 // x² / 2!
  soma += (x * x * x * x) / fatorial(4);         // x⁴ / 4!
  soma -= (x * x * x * x * x * x) / fatorial(6); // x⁶ / 6!

  return soma;
}

int main() {
  double x;

  // recebe o valor de x em radianos
  printf("Digite o valor de x (em radianos) para calcular o cosseno: ");
  scanf("%lf", &x);

  // calcula o valor aproximado de cos(x)
  double cosValorAproximado = cosAproximado(x);

  // calcula o valor exato de cos(x) usando a função cos() da biblioteca math.h
  double cosExato = cos(x);

  // imprime os resultados e a diferença
  printf("\nValor aproximado de cos(%.2f) usando 3 termos da série de Taylor: " "%.4f\n", x, cosValorAproximado);

  printf("\nValor exato de cos(%.2f) usando a função math.h: %.4f\n", x, cosExato);

  printf("\nDiferença entre os resultados: %.4f\n", cosValorAproximado - cosExato);

  return 0;
}
