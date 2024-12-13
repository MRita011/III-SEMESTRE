#include <stdio.h>

/*
  Escreva um programa em C que leia um numero e informe se ele é
  divisível por 10, por 5 e/ou por 2 ou se não é divisível por nenhum deles.
*/

int leitura();
int divisao(int num);

int leitura() {
  // função para ler o numero que vamos dividir
  int num = 0;

  printf("Digite um numero: ");
  scanf("%d", &num);

  return num;
}

int divisao(int num) {
  if (num % 10 == 0) {
    printf("%d é divisível por 10, 5 e 2\n", num);
    return 1; // é divisível por 10, 5 e 2
  } 
  
  else if (num % 5 == 0) {
    printf("%d é divisível por 5\n", num);
    return 2; // é divisível por 5
  } 
  
  else if (num % 2 == 0) {
    printf("%d é divisível por 2\n", num);
    return 3; // é divisível por 2
  } 
  
  else {
    printf("%d não é divisível por 10, 5 ou 2\n", num);
    return 0; // não é divisível por nenhum
  }
}

int main() {
  int num = leitura();
  divisao(num);

  return 0;
}