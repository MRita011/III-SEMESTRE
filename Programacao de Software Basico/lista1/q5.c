#include <stdio.h>

/*
  crie outra função similar à função do programa do exercício anterior
  para determinar também quantos segundos ainda faltam até o dia terminar.
*/

void receberHorario(int *h, int *m, int *s);
int calcularSegundos(int h, int m, int s);
int segundosRestantes(int h, int m, int s);

// função para receber o horário do usuário
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

// segundos restantes até o final do dia
int segundosRestantes(int h, int m, int s) {
  int totalSegundosDia = 24 * 3600; // 24 horas * 3600 segundos
  int segundosPassadosDia = calcularSegundos(h, m, s);
  return totalSegundosDia - segundosPassadosDia;
}

int main() {
  int horas, minutos, segundos;

  // recebe o horário
  receberHorario(&horas, &minutos, &segundos);

  // segundos desde o início do dia
  int totalSegundos = calcularSegundos(horas, minutos, segundos);
  printf("Segundos desde o início do dia: %d\n", totalSegundos);

  // segundos restantes até o final do dia
  int segundosRestantesDia = segundosRestantes(horas, minutos, segundos);
  printf("Segundos restantes até o final do dia: %d\n", segundosRestantesDia);

  return 0;
}
