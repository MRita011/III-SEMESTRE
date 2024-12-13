#include <stdio.h>

/*
  Programa para descobrir quantos bits são usados pelo compilador
  para armazenar os tipos short int, int, long int e long long int.

  Utiliza o operador sizeof(x) para determinar o tamanho, onde x é
  o tipo de dado. O resultado é multiplicado por 8 para converter
  o valor de bytes para bits.
*/

int main() {
  // calcula o tamanho em bits para cada tipo de dado e exibe o resultado
  printf("\nshort int: %d bits\n", sizeof(short int) * 8);
  
  printf("\nint: %d bits\n", sizeof(int) * 8);
  
  printf("\nlong int: %d bits\n", sizeof(long int) * 8);
  
  printf("\nlong long int: %d bits\n", sizeof(long long int) * 8);

  return 0;
}
