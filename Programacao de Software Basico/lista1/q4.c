#include <stdio.h>

/*
  Função que recebe um horário (horas, minutos, segundos)
  e calcula quantos segundos se passaram desde o início do dia.
*/

// receber o horário do usuário
void receberHorario(int *h, int *m, int *s) {
  // usando ponteiros para armazenar h, m e s diretamente nas variáveis da main
  printf("Digite as horas: ");
  scanf("%d", h);

  printf("Digite os minutos: ");
  scanf("%d", m);

  printf("Digite os segundos: ");
  scanf("%d", s);
}

// total de segundos desde o início do dia
int calcularSegundos(int h, int m, int s) { 
  return h * 3600 + m * 60 + s; 
}

int main() {
  int horas, minutos, segundos;

  receberHorario(&horas, &minutos, &segundos);

  // segundos desde o início do dia
  int totalSegundos = calcularSegundos(horas, minutos, segundos);

  // resultado
  printf("Segundos desde o início do dia: %d\n", totalSegundos);

  return 0;
}