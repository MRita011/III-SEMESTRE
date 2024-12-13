#include <stdio.h>
#include <math.h>

/*
  Com base no programa anterior, fa¸ca com que o programa termine a repetição
  quando uma aproximação aceitável for encontrada. Por exemplo, considere que
  se desejamos calcular a raiz de 25: se o resultado for 5.001, a repetição 
  pode terminar. Ou seja, o erro desejado deve ser menor ou igual a, por exemplo, 0.001.
*/

void raizBabilonica(int N, float margemErro);

void raizBabilonica(int N, float margemErro) {
  // valor inicial de k (geralmente 1)
  float k = 1.0;
  float kAntigo;

  // imprimindo a primeira iteração
  printf("Valor inicial de k: %.4f\n", k);

  int i = 1;
  do {
      kAntigo = k;

      k = (k + N / k) / 2; // calcula o novo valor de k
      printf("Valor de k após %d iteração(s): %.4f\n", i, k);

      // verifica a diferença entre k atual e k anterior
      i++;
  } 
    // diferença entre os valores é maior que o erro desejado (margemErro)
    while (fabs(k - kAntigo) > margemErro); 
}

int main() {
    int N;
    float margemErro = 0.001;

    // lê o valor de N
    printf("Digite o valor de N para calcular a raiz quadrada: ");
    scanf("%d", &N);

    raizBabilonica(N, margemErro);

    return 0;
}